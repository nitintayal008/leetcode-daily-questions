class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int t=0;//will store missing number
        int p=0;//will store repeated number 
		
         unordered_map<int,int>m;
        //storing frequency of each number in map
         for(int i=0;i<nums.size();++i)
          {
              m[nums[i]]++; 
          }
        //If frequency of any number is 2 -> store it in p
          for(auto it:m)
          {
              if(it.second==2)
              {
                  p=it.first;
              }
             
          }
        //check for missing number 
        //search for key , if key is not present store missing number in t 
           for(int i=1;i<=nums.size();++i)
           {
               auto x=m.find(i);
               if(x==m.end())
               {
                   t=i;
               }
           }
   
        v.push_back(p);
        v.push_back(t);
   
       
        return v;
    }
};