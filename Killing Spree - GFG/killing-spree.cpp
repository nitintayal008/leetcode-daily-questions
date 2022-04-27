// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
       int start = 1,end =1e5,ans =1;
       while(start<=end){
           long long int mid = start+(end-start)/2;
           long long int val=(mid*(mid+1)*(2*mid+1))/6;
           
           if(val<=n){
               ans=mid;
               start=mid+1;
           }else{
               end=mid-1;
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
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends