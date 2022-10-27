//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> ans;
    vector<int> pre;
    vector<int> ino;
    int search(int tar,int l,int h){
        while(l<h){
            int mid = (l+h)/2;
            if(tar>ino[mid]){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return l;
    }
    
    void f(int &i,int l,int r){
        if(l==r){
            ans.push_back(ino[l]);
            return;
        }
        if(l>r||i>=pre.size()||l<0){
            i--; 
            return;
        }
        
        int idx  = search(pre[i],l,r);
        f(++i,l,idx-1);
        f(++i,idx+1,r);
    }
    vector<int> leafNodes(int arr[],int n) {
        pre=vector<int>(arr,arr+n);
        ino=vector<int>(arr,arr+n);
    
        sort(ino.begin(),ino.end());
        int idx=0;
        f(idx,0,n-1);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends