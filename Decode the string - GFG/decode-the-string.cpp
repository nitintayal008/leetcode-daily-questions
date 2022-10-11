//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   string decodedString(string str){
        stack<char> st;
        stack<string> stringStack;
        
        string temp = "";
        string ans = "";
        
        for(int i=0;i<str.size();i++){
            if(str[i] == '['){
                st.push('[');
                stringStack.push(temp);
                temp = "";
                continue;
            }
            
            if(str[i] == ']'){
                st.pop();
                string prevS = stringStack.top();
                stringStack.pop();
                int num = 0;
                string s = "";
                
                for(int j=0;j<prevS.size();j++){
                    if(prevS[j] >= '0' && prevS[j] <= '9'){
                        num = num*10 + (prevS[j]-48);
                    }
                    else{
                        s += prevS[j];
                    }
                }
                
                string tempAns = "";
                for(int j=0;j<num;j++){
                    tempAns += temp;
                }
                
                ans = s+tempAns;
                temp = ans;
                continue;
            }
            temp += str[i];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends