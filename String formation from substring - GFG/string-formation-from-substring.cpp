// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes her
	    string s1="", s2="";
	    for(int i=1; i<=(s.size()/2);i++){
	        s1=s.substr(0,i);
	        s2="";
	        while(s2.size()<s.size()){
	            s2+=s1;
	        }
	        if(s2==s) return 1;
	    }
	    return 0;
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends