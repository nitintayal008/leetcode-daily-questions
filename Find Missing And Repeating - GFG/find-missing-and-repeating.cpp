// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
//here in this question we are given that only n elements are there
//and they are for sure will be from 1-n so we use trick
//we will traverse and take value as index and mark it negative and
//if we are again getting -ve value then we get our repeatig element
//    [-2,-4,1,-2,-5]
//     1  2  3  4  5
//so here we get repeting as 2 and missing as 1.


    int *findTwoElement(int *arr, int n) {
    int *res = new int[2];
    for(int i=0; i<n; i++) {
        int x = abs(arr[i]) - 1;
        if(arr[x] < 0)
            res[0] = x+1;
        else
            arr[x] *= -1;
    }
    for(int i=0; i<n; i++) {
        if(arr[i] > 0)
            res[1] = i+1;
    }
    return res;
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends