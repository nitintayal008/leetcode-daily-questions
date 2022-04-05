class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0, i = 0, j = heights.size()-1;
        while(i<j){
            int width = j - i;
            int height = min(heights[i], heights[j]); // taking minimum height to prevent the overflow
            int area = width*height;
            maxi = max(area, maxi);
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxi;
    }
};