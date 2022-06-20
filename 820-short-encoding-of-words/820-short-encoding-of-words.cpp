class Solution {
public:
    static bool compare(string& s1, string& s2){
        return s1.size()>s2.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        string ans;
        for(string &s:words){
            if(ans.find(s + "#")==string::npos)
                ans+=s+"#";
        }
        return ans.size();
    }
};