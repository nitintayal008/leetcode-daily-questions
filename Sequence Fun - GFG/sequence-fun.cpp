//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
	
	   // long long mod=1000000007;
	    long long mod=1e9+7;
		int NthTerm(int n){
		    // Code  here
		   long long final=1;
		    for(int i=1;i<=n; i++){
		        final=((final*i)+1)%mod;
		    }
		    return final;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends