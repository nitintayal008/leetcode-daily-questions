class Solution {
public:
    int startingIndex(vector<int>& nums, int target){
        int left=-1;
       // int right=-1;
        int n=nums.size();
        int l=0;
        int r=n-1;
        if(l>r)return -1;
        
        
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                 left=mid;
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
                
            }else if(nums[mid]>target){
                r=mid-1;
            }
        }
        return left;
    }
    
     int endIndex(vector<int>& nums, int target){
         int n=nums.size();
         int right=-1;
         int l=0;
       int r=n-1;
         if(l>r)return -1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                 right=mid;
                l=mid+1;
            }else if(nums[mid]<target){
                l=mid+1;
                
            }else if(nums[mid]>target){
                r=mid-1;
            }
        }
         return right;
     }
    vector<int> searchRange(vector<int>& nums, int target) {
        //we are using binary search in both the array
         vector<int>ans;
        int left=startingIndex(nums, target);
        int right=endIndex(nums, target);
        
       
//         int left=-1;
//         int right=-1;
//         int n=nums.size();
//         int l=0;
//         int r=n-1;
        
        
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(nums[mid]==target){
//                  left=mid;
//                 r=mid-1;
//             }else if(nums[mid]<target){
//                 l=mid+1;
                
//             }else{
//                 r=mid-1;
//             }
//         }
        ans.push_back(left);
        
        
//         l=0;
//         r=n-1;
//         while(l<=r){
//             int mid=(r-l)/2;
//             if(nums[mid]==target){
//                  right=mid;
//                 l=mid+1;
//             }else if(nums[mid]<target){
//                 l=mid+1;
                
//             }else{
//                 r=mid-1;
//             }
//         }
            ans.push_back(right);
        return ans;
    }
};