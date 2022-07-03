class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int prev=0;
        int count=1;
        for(int i=1; i<nums.size(); i++){
            int curr=nums[i]-nums[i-1];
            if(curr>0 && prev<=0 || curr<0 && prev>=0){
                prev=curr;
                count++;
            }
        }
        return count;
    }
};