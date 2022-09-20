class Solution {
public:
    int findLength(vector<int>& num1, vector<int>& num2) {
        int n=num1.size();
        int m=num2.size();
        int ans=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=1; i<=n; i++){
            for(int j=1;j<=m; j++){
                if(num1[i-1]==num2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans;
    }
};