//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        int ans=0;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=0;
        while(i<=j && j<arr.size()){
            if(arr[j]-arr[i]<=k){
                 ans=max(ans,j-i+1);
                 j++;
            }else{
                i++;
            }
        }
        return n-ans;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends