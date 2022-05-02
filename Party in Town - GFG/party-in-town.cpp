// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int u, vector<int>&dist, vector<vector<int>>&adj){
       for(int v : adj[u]){
           if(dist[v] == INT_MAX){
               dist[v] = min(dist[v], dist[u] + 1);
               dfs(v, dist, adj);
           }
       }
   }
   int partyHouse(int N, vector<vector<int>> &adj){
       int res = INT_MAX;
       // for(int i = 0; i<N; i++){
       //     for(int j = 0; j<adj[i].size(); j++){
       //         cout<<adj[i][j]<<" ";
       //     }
       //     cout<<endl;
       // }
       
       for(int i = 1; i<=N; i++){
           vector<int>dist(N+1, INT_MAX);
           dist[i] = 0;
           dfs(i, dist, adj);
           int res1 = 0;
           for(int i = 1; i<=N; i++){
               //cout<<dist[i]<<"  ";
               res1 = max(dist[i], res1);
           }
           //cout<<endl;
           res = min(res1, res);
       }
   return res;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends