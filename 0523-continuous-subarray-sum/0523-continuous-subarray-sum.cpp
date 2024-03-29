class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixsum=0;
        for(int i=0;i<nums.size(); i++){
            prefixsum+=nums[i];
            prefixsum=prefixsum%k;
            
            if(prefixsum==0 && i>0)return true;
            
            if(mp.find(prefixsum)!=mp.end()){
                if((i-mp[prefixsum])>1){
                    return true;
                }
            }
            else
                mp[prefixsum]=i;
        }
        return false;
    }
};