class Solution {
public:
   void solve(vector<int>& nums, int index,vector<vector<int>>&ans,vector<int>&temp){
        if(nums.size()==index){
            ans.push_back(temp);
            return;
        }
       temp.push_back(nums[index]);
       solve(nums,index+1,ans,temp);
       temp.pop_back();
      // temp.push_back(nums[index]);
       solve(nums,index+1,ans,temp);
       
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums,0,ans,temp);
        return ans;
    }
};
// class Solution {
// public:
//     vector<vector<int>> ans;
    
//     void sub(vector<int> &nums, int i, vector<int> temp)
//     {
//         if(i==nums.size())
//         {
//             ans.push_back(temp);
//             return;
//         }
        
//         sub(nums, i+1, temp);
//         temp.push_back(nums[i]);
//         sub(nums, i+1, temp);
//     }
    
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> temp;       
//         sub(nums, 0, temp); // or sub(nums, 0, vector<int> {});
//         return ans;
//     }
// };