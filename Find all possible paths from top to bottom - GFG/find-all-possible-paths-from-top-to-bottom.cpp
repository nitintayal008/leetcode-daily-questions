// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>>ans;
    void helper(int n,int m,int i,int j ,vector<vector<int>> grid,vector<int>a){
        if(i>=n or j>=m)
          return ;
        
        if(i==n-1 and j==m-1 )
        {
            a.push_back(grid[i][j]);
            ans.push_back(a);
            return ;
        }
         a.push_back(grid[i][j]);
        if(i<n-1 and j==m-1){
            helper(n,m,i+1,j,grid,a);
        }
        else if(i==n-1 and j<m-1){
               helper(n,m,i,j+1,grid,a);
        }
        else{
        helper(n,m,i+1,j,grid,a);
           
       
  
        helper(n,m,i,j+1,grid,a);
        }
        
        
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        
        vector<int>a;
       helper(n,m,0,0,grid,a);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends