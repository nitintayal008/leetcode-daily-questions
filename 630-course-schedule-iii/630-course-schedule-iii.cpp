class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(),cmp);
        
        int sum=0;
        priority_queue<int>pq;
        for(auto i:courses){
            pq.push(i[0]);
            sum+=i[0];
            if(sum>i[1]){
                sum-=pq.top();
                pq.pop();
            }
            
        }
        return pq.size();
    }
};