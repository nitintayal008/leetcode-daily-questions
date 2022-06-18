// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int xarr[4]={1,-1,0,0};
int yarr[4]={0,0,1,-1};
class Solution {
public:
    
    bool isPossible(int x,int y,int n,int m,vector <vector <int>> &matrix,vector <vector <bool>> &vis){
        if(x>=0 && x<n && y>=0 && y<m && matrix[x][y]==1 && vis[x][y]==false){
            return true;
        }
        return false;
    }
    void findLongPath(int xs,int ys,int xd,int yd,int n,int m,int ct,int &ans,vector <vector <int>> &matrix,vector <vector <bool>> &vis){
        if(xs==xd && ys==yd){
            ans=max(ans,ct);
            return;
        }
       // cout<<ct<<endl;
        
        for(int i=0;i<4;i++){
            int newx=xs+xarr[i];
            int newy=ys+yarr[i];
            
            if(isPossible(newx,newy,n,m,matrix,vis)){
                vis[newx][newy]=true;
                
                findLongPath(newx,newy,xd,yd,n,m,ct+1,ans,matrix,vis);
                vis[newx][newy]=false;
            }
        }
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector <vector <bool>> vis(n,vector <bool> (m,false));
        int ans=-1;
        if(matrix[xs][ys]==0){
            return -1;
        }
        int ct=0;
        vis[xs][ys]=true;
        findLongPath(xs,ys,xd,yd,n,m,ct,ans,matrix,vis);
        
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
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends