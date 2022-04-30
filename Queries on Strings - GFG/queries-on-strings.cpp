// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    set<int>s;
	    int l,r;
	    vector<int>ans;
	    for(int i=0; i<Query.size(); i++){
	        l=Query[i][0];
	        r=Query[i][1];
	        for(int j=l-1;j<r; j++){
	            s.insert(str[j]);
	        }
	         ans.push_back(s.size());
	         s.clear();
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends