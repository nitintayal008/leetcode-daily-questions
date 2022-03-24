class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int start=0;
        int count=0;
        int end=n-1;
        while(start<=end){
            if(people[end]==limit){
                count++;
                end--;
            }else{
                if(people[start]+people[end]<=limit){
                    count++;
                    start++;
                    end--;
                }else{
                    count++;
                    end--;
                }
            }
        }
        return count;
    }
};