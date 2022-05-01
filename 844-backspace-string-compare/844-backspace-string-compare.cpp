class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st;
        stack<int>pt;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'&& !st.empty()){
            st.pop();
        }else if(s[i]!='#')st.push(s[i]);
        }
        for(int j=0; j<t.size(); j++){
            if(t[j]=='#'&& !pt.empty()){
            pt.pop();
        }else if(t[j]!='#')pt.push(t[j]);
        }
        return st==pt;
        
    }
};