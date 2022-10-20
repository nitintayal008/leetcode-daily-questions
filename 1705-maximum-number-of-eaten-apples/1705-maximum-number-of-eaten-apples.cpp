class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=days.size();
        int count=0;
        for(int i=0;i<n || !pq.empty(); i++){
            
            if(i<n && apples[i])
            pq.push({days[i]+i,apples[i]});
            
            while(!pq.empty() && i>=pq.top().first){
                pq.pop();
            }
            
            if(!pq.empty()){
               auto p=pq.top();
                pq.pop();
            if(i<n){
               
                count++;
                p.second--;
                if(p.second>0)
                    pq.push(p);
                
            }else{
                int add=min(p.first-i,p.second);
                count+=add;
                i+=add-1;
            }
        }
      }
        return count;
    }
};