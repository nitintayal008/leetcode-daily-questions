class Solution {
    bool isSub(string str, string temp){
        int n=str.size();
        int m=temp.size();
        int i=0,j=0;
        while(i<n && j<m){
           
            //if(i==n && j!=m)return false;
            if(str[i]==temp[j]){
                i++;
                j++;
            }else{
                i++;
            }
            // if(j==m)return true;
        }
        return (j==m);
    }
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        
        int c = 0;
        unordered_map<string, int>mp;
        for (int i = 0; i < words.size(); i++)
            mp[words[i]]++;
            
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (isSub(S, it->first))
                c += it->second;
        }
        
        return c;
    }
};