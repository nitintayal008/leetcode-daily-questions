class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=m-1;
//         for(int i=0; i<n; i++){
//             for(int j=m; j>=0; j--)
//                 if(matrix[i][j]==target){
//                     return true;
//                 }
//             if(matrix[i][j-1]>target){
                
//             }
//         }
        int i=0;
        while(i<n && j>=0){
            if(matrix[i][j]==target){
                  return true;
                }
            else
            if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};