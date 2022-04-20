// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	 static bool cmp(pair<long double,long long>&a,pair<long double,long long>&b){
	    return a.first>b.first;
	}
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	   vector<pair<long double,long long>>mp;
	   for(int i=0;i<N;i++){
	       mp.push_back({(double)p[i]/(double)w[i],w[i]});
	   }
	   sort(mp.begin(),mp.end(),cmp);
	   long double profit=0;
	   for(int i=0;i<mp.size();i++){
	       long long m=sqrt(mp[i].second);
	       if(mp[i].second!=m*m){
	           if(C-mp[i].second>=0){
	               profit+=mp[i].first*mp[i].second;
	               C=C-mp[i].second;
	           }
	           else{
	               long double x=mp[i].first*C;
	               profit+=x;
	               break;
	           }
	       }
	   }
	   return profit;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends