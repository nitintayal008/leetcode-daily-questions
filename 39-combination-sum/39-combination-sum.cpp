class Solution {
public:
    void pick(int start,int total, vector<int>& arr,vector<vector<int>>&ans,vector<int>&temp){
        if(start==arr.size()){
        if(total==0){
          ans.push_back(temp);
        }
            return;
    }
        if(arr[start]<=total){
            temp.push_back(arr[start]);
            pick(start,total-arr[start],arr,ans,temp);
            temp.pop_back();
        }
        pick(start+1,total,arr,ans,temp);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        pick(0,target,candidates,ans,temp);
        return ans;
    }
};