class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        deque<int>dq;
        vector<int> ans;
        int i;
        for(i=0; i<k; i++)
        {
            while(!dq.empty() && arr[i]>= arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        
        for(;i<n;i++){
            //here we get importance of using index as now we can remove them from starting by comapring as they will be in sequeuce order of 0,1,2...
            
            while(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            } 
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
       }
        return ans;
            
    }
};