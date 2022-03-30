class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int end=m-1;
        int start=0;
        while(start<n && end>=0){
            if(target==matrix[start][end])return true;
            else if(target<matrix[start][end])
                end--;
                else
               start++; 
        }
        return 0;
    }
};