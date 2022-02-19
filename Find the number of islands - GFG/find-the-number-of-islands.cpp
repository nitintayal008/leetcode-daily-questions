// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
     void mark_all_islands(vector<vector<char>>& mt,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || mt[x][y]!='1')
            return ;
            
            mt[x][y]='2';
        
            mark_all_islands(mt,x+1,y,r,c);
            mark_all_islands(mt,x,y+1,r,c);
            mark_all_islands(mt,x,y-1,r,c);
            mark_all_islands(mt,x-1,y,r,c);
            mark_all_islands(mt,x-1,y-1,r,c);
            mark_all_islands(mt,x+1,y+1,r,c);
            mark_all_islands(mt,x-1,y+1,r,c);
            mark_all_islands(mt,x+1,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int row=grid.size();
        if(row==0)
            return 0;
        int  column=grid[0].size();
        
        int count=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(grid[i][j]=='1'){
                    mark_all_islands(grid,i,j,row,column);
                    count++;
                }
            }
        }
        return count;
    }

};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends