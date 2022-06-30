class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>nums1=nums;
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums1[i]=nums[nums[i]];
        }
        return nums1;
    }
};