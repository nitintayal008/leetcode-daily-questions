class Solution {
public:
    bool static cmp(vector<int>a, vector<int>b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        int sum=0;
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        for(int i=0; i<n; i++){
          int box_size=min(boxTypes[i][0], truckSize);
            sum+=box_size*boxTypes[i][1];
            truckSize-=box_size;
             if(truckSize==0)
                break;
        }
        return sum;
    }
};