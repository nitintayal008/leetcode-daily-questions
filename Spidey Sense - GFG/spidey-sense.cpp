// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
    int row, col;
    bool isValid(int x, int y){
        return x>=0 && x<row && y>=0 && y<col;
    }
    vector<vector<int>> findDistance(vector<vector<char>>& a, int M, int N) { 
        row = a.size(), col = a[0].size();
        vector<vector<int>> res(row, vector<int> (col, -1));
        deque<pair<pair<int, int>, int>> q;
        set<pair<int, int>> vis;
        for(int k=0; k<row; k++){
            for(int x=0; x<col; x++){
                if(a[k][x]=='B'){
                    q.push_back({{k, x}, 0});
                    vis.insert({k, x});
                }
            }
        }
        vector<int> dirs = {0,1,0,-1,0};
        while(!q.empty()){
            int x = q.front().first.first, y = q.front().first.second, c = q.front().second;
            q.pop_front();
            res[x][y]=c;
            for(int k=1; k<=4; k++){
                int nx = (x+dirs[k-1]), ny = (y+dirs[k]);
                if(isValid(nx, ny) && a[nx][ny]=='O' && vis.find({nx, ny})==vis.end()){
                    vis.insert({nx, ny});
                    q.push_back({{nx, ny}, c+1});
                }
            }
        }
        return res;
    } 

};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}  // } Driver Code Ends