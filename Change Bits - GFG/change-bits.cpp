// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int n) {
        // code here
        int i=0;
        int sum=0;
        int k=n;
        vector<int>ans;
        while(n){
            int temp=n%2;
            n=n/2;
            if(temp==0){
                sum+=1*pow(2,i++);
            }else{
                sum+=1*pow(2,i++);
            }
        }
        ans.push_back(sum-k);
        ans.push_back(sum);
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends