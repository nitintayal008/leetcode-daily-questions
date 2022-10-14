class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        vector<int>ans;
        int n=rains.size();
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n; i++){
            if(rains[i]==0){
                s.insert(i);
                ans.push_back(1);
            }
            else
            {
                if(mp.find(rains[i])!=mp.end()){
                    auto it=s.lower_bound(mp[rains[i]]);
                    if(it==s.end())
                      return {};
                    ans[*it]=rains[i];
                    s.erase(*it);
                }
                mp[rains[i]]=i;
                ans.push_back(-1);
            }
            
        }
        return ans;
    }
};