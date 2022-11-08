class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
       for(int i=1;i<s.length();++i) //start comparing from 2nd character if the string
        {
            if(st.empty()|| (st.top()-s[i] != 32 && s[i]-st.top() != 32)) st.push(s[i]);
            else st.pop(); 
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