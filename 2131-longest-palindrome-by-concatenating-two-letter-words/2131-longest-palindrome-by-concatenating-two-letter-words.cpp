class Solution {
public:
    string rev(string &str){
        char temp=str[0];
        str[0]=str[1];
        str[1]=temp;
        return str;
    }
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int count=0;
        int n=words.size();
        // int first=0;
        for(int i=0;i<n; i++){
            string p=words[i];
            rev(p);
            // reverse(p.begin(),p.end());
            if(mp[p]>0){
                count+=4;
                mp[p]--;
            }else{
                 mp[words[i]]++;
            }
        }
        
       for(auto it:mp){
           if(it.first[0]==it.first[1] && it.second>0){
               return count+2;
           }
       }
        return count;
    }
};