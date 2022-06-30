class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums1=nums;
        int n=nums.size();
        map<int ,int>mp;
        sort(nums1.begin(), nums1.end());
        for(int i=n-1; i>=0; i--){
            mp[nums1[i]]=i;
        }
        for(int i=0; i<n; i++){
            nums[i]=mp[nums[i]];
        }
        
        return nums;
    }
};