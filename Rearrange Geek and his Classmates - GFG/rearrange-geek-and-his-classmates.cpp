// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        
        //we acn easily solve this by taking new array and 
        //byy simply coping previous array into new one and modify
        //old array by taking valur from newarray
        //but this take o(N)space
        
        //now we have to slove without extra space
        //so we will use trick to store the element.
        //a[i]+(a[a[i]]%N)*10
        long long N=n;
        for(int i=0; i<n; i++){
            a[i]=a[i]+(a[a[i]]%N)*N;
        }
        for(int i=0; i<n; i++)
        a[i]=a[i]/N;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}

  // } Driver Code Ends