class Solution {
public:vector<string>m;
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.size()==0)
            return res;
        string s;
        m={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        dfs(s,digits,0,res);
           return res;
    }
        
        void dfs(string &s, const string &digits, int pos, vector<string>&res)
        {
            if(pos==digits.size())
            {
                res.push_back(s);
                return;
            }
            for(auto ch:m[digits[pos]-'0'])
            {
                s+=ch;
                dfs(s,digits,pos+1,res);
                s.pop_back();
            }
        }
};