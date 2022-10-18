class Solution {
public:
    int numSquares(int A) {
        int dp[A+1];
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=A;i++) {
            int min = INT_MAX;
            for(int j=1;j*j<=i;j++) {
                int rem = i - j*j;
                if((dp[rem]< min)) {
                    min = dp[rem];
                }
                // min = dp[rem];
            }
            dp[i] = min+1;
        }
        return dp[A];
        }
};