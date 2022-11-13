class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        string ans="";
        for(int i=0;i<s.size(); i++){
            if(s[i]==' ')continue;
            while(i<s.size()  && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            st.push(temp);
            temp="";
        }
        // st.push(temp);
        while(!st.empty()){
            
            ans+=st.top();
             st.pop();
            if(!st.empty()){
                ans+=" ";
            }
           
        }
        return ans;
    }
};