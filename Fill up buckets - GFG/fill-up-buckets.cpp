//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

long long int m = 1000000007;
class Solution{
public:
    int totalWays(int n, vector<int>v) {
        
        sort(v.begin(), v.end());
        long long int ans = v[0];
        int i=0;
        for(auto &val:v)
        {
            val-=i;
            if (val > 0 and i!=0)
            {
                
                ans *= val;
                ans = ans%m;
            }
            else if (val<=0){ans=0; break;}
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends