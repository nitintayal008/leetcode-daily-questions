// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long n, long M, long L, long H[], long A[]) {
        
        int l = 0, h = 1e8;
        int ans = 0;
        while(l <= h) {
            int mid = l + (h - l) / 2;
            
            long long speed = 0;
            for(int i = 0; i < n; i++) {
                long sp = H[i] + (mid * A[i]);
                if(sp >= L) speed += sp;
            }
            
            if(speed >= M) {
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends