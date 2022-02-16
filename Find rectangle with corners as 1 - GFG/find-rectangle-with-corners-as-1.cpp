// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        // Your code goes here
        unordered_map<int,unordered_set<int>>mp;
          int m = matrix.size();
          int n = matrix[0].size();
          for(int i =0;i<m;i++)
          {
              for(int j=0;j<n;j++)
              {
                  for(int j2=j+1;j2<n;j2++)
                  {    
                      if(matrix[i][j]==1 && matrix[i][j2]==1)
                      {
                          if(mp.find(j)!=mp.end() && mp[j].find(j2)!=mp[j].end())
                          {
                              return true;
                          }
                          else mp[j].insert(j2);
                      }
                      
                  }
              }
          }
          return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends