class Solution {
public:
    bool canConstruct(string r, string ma) {
        int hash[26]={0};
       for(char ch : ma)
           hash[ch-'a']++;
       
       for(char ch : r)
            if(hash[ch - 'a']-- <= 0)
                return false;
        
        return true;
    }
};