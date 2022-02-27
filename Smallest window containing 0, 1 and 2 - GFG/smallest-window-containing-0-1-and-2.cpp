// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int smallestSubstring(string s) {
        vector<int> mp(3, 0);
        
        int j = 0, ans = INT_MAX;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]-'0']++;
            
            while(mp[s[j]-'0'] > 1) {
                mp[s[j]-'0']--;
                j++;
            }
            
            if(mp[0] >= 1 && mp[1] >= 1 && mp[2] >= 1) 
                ans = min(ans, i-j+1);
        }
        return ans == INT_MAX ? -1 : ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends