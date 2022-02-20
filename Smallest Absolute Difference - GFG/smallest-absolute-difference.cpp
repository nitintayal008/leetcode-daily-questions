// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int kthDiff(int a[], int n, int k);

// Driver code
int main() {
    int t, i;
    int k;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;

        cout << kthDiff(a, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends


int countPair(int a[], int n, int mid)
{
   int result = 0;
for(int i=0;i<n-1;i++)
   result = result + (upper_bound(a+i, a+n, a[i] + mid) - (a+i+1));
return result;
}
int kthDiff(int a[], int n, int k)
{
   
   int pair = n*(n-1)/2;
   if(n==0 || n==1)
   {
       return 0;
   }
   if(n==2)
   {
       return abs(a[1]-a[0]);
   }
   sort(a,a+n);
   int l = 0;
   int h = a[n-1]-a[0];
   while(l<h)
   {
       int mid=(l+h)/2;
       if(countPair(a,n,mid)<k)
       {
           l=mid+1;
       }
       else
       h=mid;
   }
   return l;
}