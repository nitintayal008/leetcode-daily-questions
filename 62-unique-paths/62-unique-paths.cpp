class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return countPaths(m,n,dp);
    }
     int countPaths(int m,int n,vector<vector<int>>&dp){
        if(m==1 || n==1) return 1;
       // if(i>=m && j>=n)return 0;
        
        if(dp[m][n]!=-1)return dp[m][n];
            else return dp[m][n]= countPaths(m-1,n,dp) + countPaths(m,n-1,dp);
            
        
    }
};