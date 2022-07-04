class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int count=1;
        vector<int>temp(n,1);
        
        for(int i=1; i<ratings.size(); i++){
            if(ratings[i]>ratings[i-1]){
                temp[i]=temp[i-1]+1;
            }
        }
        for(int i=n-2;i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                temp[i]=max(temp[i+1]+1,temp[i]);
            }
        }
        int res=0;
        for(auto it: temp){
            res+=it;
        }
        return res;
    }
};
