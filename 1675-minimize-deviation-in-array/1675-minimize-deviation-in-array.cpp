class Solution {
public:
    //we use priority queue as it use max heap internally
    //we will first multipy all the odd digits with 2 to make all digit as even
    //then we perform our logic by finding differencefrom min and max and dividing max
    //by 2 till it become odd
    
    //time co is O(N(logN)(logM)) because pq takes lognlogm for max element
    //and space is O(n)
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int minval=INT_MAX;
        for(int i:nums){
            if(i%2!=0)
                i*=2;
            minval=min(minval,i);
            pq.push(i);
        }
        int diff=INT_MAX;
        while(!pq.empty()  && pq.top()%2==0){
            int maxval=pq.top();
            pq.pop();
            diff=min(diff,maxval-minval);
            minval=min(minval,maxval/2);
            pq.push(maxval/2);
        }
        return min(diff,pq.top()-minval);
    }
};