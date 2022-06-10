class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>hash;
        int start=0,end=0,ans=0,n=s.size();
        while(end!=n)
        {
            if(hash[s[end]]>0)
            {
                hash[s[start]]--;
                start++;
            }
            else
            {
                hash[s[end]]++;
                ans=max(ans,end-start+1);
                end++;
            }
        }
            return ans;
    }

    
};