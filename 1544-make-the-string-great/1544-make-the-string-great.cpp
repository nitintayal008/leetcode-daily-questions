class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
       for(int i=1;i<s.length();++i) //start comparing from 2nd character if the string
        {
            if(!st.empty() && abs((st.top()-'a')-(s[i]-'a'))==32 ){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string ans="";
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//upper case letter is from 65-90
//lower case letter is from 97-122