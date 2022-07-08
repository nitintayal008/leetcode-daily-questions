// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
   static bool cmp(pair<int,int>&A1,pair<int,int>&A2){
        if(A1.second<A2.second)
        return false;
        else if(A1.second>A2.second)
        return true;
        else
        return A1.first>A2.first;
    }
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        vector<int>ans;
        int n=array.size();
        map<int,int>mp;
        for(int i=0; i<n; i++){
           mp[array[i]]++;
        }
        vector<pair<int, int>>A;
        for(auto& it: mp){
            A.push_back(it);
        }
        sort(A.begin(),A.end(),cmp);
        for(int i=0;i<A.size() && k>0;i++,k--){
            ans.push_back(A[i].first);
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
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends