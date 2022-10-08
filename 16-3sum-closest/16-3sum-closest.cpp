class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     // Our main approch is tosort the array and  fix one number and move other two number from left and right    
        int sum;
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3){
            for(int i=0;i<n; i++){
                sum+=nums[i];
            }
            return sum;
        }
        
        ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(abs(target-ans)>abs(target-sum)){
                     ans=sum;
                if (ans == target) return ans;
                }
                   sum>target?k--:j++;
            }
            
        }
        return ans;
    }
};