//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int n, int k) {
        // code here
        vector<int>dp(k,0);
        for(int i=0;i<n; i++){
            int res=arr[i]%k;
            dp[res]+=1;
        }
        int ans=0;
        int i=1;
        int j=k-1;
        while(i<j){
            ans+=max(dp[i],dp[j]);
            i++;
            j--;
        }
        if(dp[0]>0){
            ans+=1;
        }
        if(i==j && dp[i]!=0){
            ans+=1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends