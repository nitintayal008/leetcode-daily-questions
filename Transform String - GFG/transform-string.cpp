// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        int count=0;
        int n=A.size();
        int m=B.size();
        if(n!=m) return -1;
        int i=n,j=m;
        int s=A.size();
        int s1=0;
        int s2=0;
        for(int i=0; i<s;i++){
            s1+=int(A[i]);
            s2+=int(B[i]);
        }
        if(s1!=s2)
        return -1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }else{
                i--;
                count++;
            }
           
        }
        
        return count;
    }
};

//

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends