class Solution {
public:vector<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     sort(candidates.begin(),candidates.end());
        vector<int>temp;
        fun(candidates,target,temp,0);
        return ans;
    }
    
    void fun(vector<int>& candidates, int target,vector<int>temp,int i){
        if(target==0){
            ans.push_back(temp);
        }
        
       // if(i==candidates.size())return;
       // for(int i=0; i<candidates.size();i++)
        while(i< candidates.size() && target-candidates[i]>=0){
           // if(target-candidates[i]>=0){
                temp.push_back(candidates[i]);
                fun(candidates,target-candidates[i],temp,i);
                i++;    
                temp.pop_back();
          //  }
        }
    }
};