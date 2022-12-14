class Solution {
public:
    int candy(vector<int>& A) {
        vector<int> ans(A.size(),1);

    for(int i=0;i<(A.size()-1);i++) {
        if(A[i+1]>A[i]) {
            ans[i+1] = ans[i]+1;
        }
    }
    for(int i=(A.size()-2);i>=0;i--) {
        if(A[i]>A[i+1] && ans[i]<=ans[i+1]) {
            ans[i] = ans[i+1]+1;
        }
    }
    int sum =0;
    for(int i=0;i<A.size();i++) {
        sum+=ans[i];
    }
    return sum;
    }
};