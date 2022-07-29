class Solution {
public:
    int firstUniqChar(string s) {
      int n=s.size();
        int res;
       int temp[256]={0};
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