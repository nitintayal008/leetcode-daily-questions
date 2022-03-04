// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> A, int N){
        auto isPossible = [] (vector<int> ar) {
            std::sort(ar.begin(), ar.end());
            return ar[0] + ar[1] > ar[2];
        };
        
        vector<int> ans;
        for(int i = 0; i < N - 2; i++) 
            ans.push_back(isPossible({A[i], A[i + 1], A[i + 2]}));
        
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }

    return 0; 
}   // } Driver Code Ends