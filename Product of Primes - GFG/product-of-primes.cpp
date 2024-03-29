// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    bool isPrime(long long n){
        if(n==1) return false;
        
        for(int i=2; i*i<=n; i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
public:
    long long primeProduct(long long L, long long R){
        // code here
        long long res=1;
        for(int i=L; i<=R; i++){
            if(isPrime(i)){
                res*=i;
                res%=1000000007;
            }
        }
        return res;
    
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends