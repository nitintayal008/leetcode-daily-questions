class Solution {
public:
    int helper(int m, int n, int row, int col, vector<vector<int>> &dp){
        if(row >= m or col >= n) return 0;
        
        if(row == m - 1 and col == n - 1) return 1;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int ans = 0;
        ans += helper(m, n, row, col + 1, dp);
        ans += helper(m, n, row + 1, col, dp);
        
        return dp[row][col] = ans;
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(m, n, 0, 0, dp);
    }
};