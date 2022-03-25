class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int mincost = 0;
        
        for(int i = 0; i<costs.size(); ++i)
        {
			
            mincost += costs[i][0];//we will add cost to send A by all the person
			
            diff.push_back(costs[i][1] - costs[i][0]);// we will find out diifenece
        }
		
		
        sort(diff.begin(),diff.end());
        
		// picking n persons having least diff
		// sending them to city B
        for(int i=0; i<costs.size()/2; ++i)
        {
            mincost += diff[i];//addinf difference to total calculated amount
        }
        
        return  mincost;
        
    }
	
};