class Solution {
public:
    string reverseVowels(string s) {
        char vow[256]={0};
         vow['a'] = 1, vow['A'] = 1, vow['e'] = 1, vow['E'] = 1, vow['i'] = 1, vow['I'] = 1, vow['o'] = 1, vow['O'] = 1, vow['u'] = 1, vow['U'] = 1;
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            while(i<j && vow[s[i]]==0){
                i++;
            }
            while(i<j && vow[s[j]]==0){
                j--;
            }
            swap(s[i++],s[j--]);
        }
        return s;
    }
};