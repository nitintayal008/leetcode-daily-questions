class Solution {
public:
    void mark_all_islands(vector<vector<char>>& mt,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || mt[x][y]!='1')
            return ;
            
            mt[x][y]='2';
        
            mark_all_islands(mt,x+1,y,r,c);
            mark_all_islands(mt,x,y+1,r,c);
            mark_all_islands(mt,x,y-1,r,c);
            mark_all_islands(mt,x-1,y,r,c);
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