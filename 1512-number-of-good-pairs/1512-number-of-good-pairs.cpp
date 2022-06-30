class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //int temp[101]={};
        vector<int>temp(101,0);
        int res=0;
        for(auto it: nums){
            temp[it]++;
        }
        for(auto it:temp){
            if(it)
                res+=it*(it-1)/2;
        }
        return res;
    }
};