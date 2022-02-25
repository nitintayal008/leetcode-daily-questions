// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here '
        int i=0,j=0;
        int n=s1.size();
        while(i<n && j<n){
            if(s1[i]=='#')i++;
            else if(s2[j]=='#')j++;
            else if(s1[i]!=s2[j]) return "No";
            else if(s1[i]=='B' && i>j)
            return "No";
            else if(s1[i]=='A' && i<j)
            return "No";
            else{
                i++;
                j++;
            }
        }
        return "Yes";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends