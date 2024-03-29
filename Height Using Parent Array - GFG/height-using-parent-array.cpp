// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int find_height(int arr[], int i)
    {
        if(arr[i] == -1)
        return 1;
        
        return 1 + find_height(arr, arr[i]);
    }
    
    int findHeight(int n, int arr[]){
        
        return find_height(arr, n - 1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends