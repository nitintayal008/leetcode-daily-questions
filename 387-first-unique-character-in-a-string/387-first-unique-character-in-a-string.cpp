class Solution {
public:
    int firstUniqChar(string s) {
      int n=s.size();
        int res;
       unordered_map<char, int>temp;
        for(int i=0; i<n; i++){
            temp[s[i]]++;
        }
        for(int i=0; i<n; i++){
            if(temp[s[i]]==1){
                 return i;
                break;
            }
        }
        return -1;
    }
};