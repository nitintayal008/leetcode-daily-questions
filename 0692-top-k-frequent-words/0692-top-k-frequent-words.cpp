class Solution {
    bool static cmp(pair<string, int>& a,
         pair<string, int>& b)
{
        if(a.second==b.second){
            return a.first<b.first;
        }
         return a.second > b.second;
}
public:
    
    
   
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        int n=words.size();
        for(int i=0;i<n; i++){
                mp[words[i]]++;
        }
        vector<pair<string,int>>p;
        for(auto it: mp){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),cmp);
        vector<string>ans;
        for(int i=0;i<k; i++){
            ans.push_back(p[i].first);
        }
        return ans;
    }
};
