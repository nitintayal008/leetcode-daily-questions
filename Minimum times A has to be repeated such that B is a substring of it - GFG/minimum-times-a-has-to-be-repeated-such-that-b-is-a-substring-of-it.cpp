// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   int minRepeats(string A, string B) {
        int repeat = 1;
        string comp = A;
        while(comp.size()<B.size()){comp.append(A);repeat++;}
        int pos=0;
        if((pos=comp.find(B))!=string::npos)return repeat;
        comp+=A;repeat++;
        if((pos=comp.find(B))!=string::npos)return repeat;
        return -1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends