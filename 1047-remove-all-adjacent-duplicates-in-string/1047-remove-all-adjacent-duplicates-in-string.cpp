class Solution {
public:
    string removeDuplicates(string S) {
        
        string res;
        
        for(char ch : S)
        {
            if(!res.empty() && res[res.size() - 1] == ch) res.pop_back();
            else res += ch;
        }
        
        return res;
    }
};