// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        unordered_map<int,int>mp;
        for(int i=0; i<n;i++){
            mp[arr[i]]++;
        }
        int k=mp.size();
        mp.clear();
        int ans=0;
        int j=0;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
            while(mp.size()==k)
            {
                ans+=(n-i);
                mp[arr[j]]--;
                if(mp[arr[j]]==0)
                mp.erase(arr[j]);
                j++;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends