class Solution {
public:
    //this is the simple recurssion code we are doing
    //taking ths nums set and new vector by taking one element of nums and not taking recursively
    void recurFunc(int index,vector<int>&nums,vector<vector<int>>&vec,vector<int>&v){
        if(index==nums.size()){
            vec.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        recurFunc(index+1,nums,vec,v);
         v.pop_back();
        recurFunc(index+1,nums,vec,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>v;
        recurFunc(0,nums,vec,v);
        return vec;
    }
};