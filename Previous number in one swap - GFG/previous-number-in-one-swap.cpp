// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string s){
       int n = s.length(), pos=-1;
       for(int i=0; i+1<n; i++)
       {
           if(s[i+1]<s[i]) pos=i;
       }
       if(pos==-1) return "-1";
       int pos1;
       for(int i=pos+1; i<n; i++)
       {
           if(s[i]<s[pos] and s[i]!=s[i-1]) pos1=i;
       }
       swap(s[pos], s[pos1]);
       if(s[0]=='0') return "-1";
       return s;
   }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends