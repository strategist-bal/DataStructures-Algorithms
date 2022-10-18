class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxSoFar =arr[0];
        int maxEndingHere = arr[0];
        int minEndingHere = arr[0];
        int negativeToggle=0;

        for(int i=1;i<arr.size();i++) {
             int temp = max({arr[i],arr[i]*maxEndingHere,arr[i]*minEndingHere});
             minEndingHere = min({arr[i],arr[i]*maxEndingHere,arr[i]*minEndingHere});
             maxEndingHere = temp;
             maxSoFar = max(maxSoFar,maxEndingHere);
        }
        return maxSoFar;
    }
};