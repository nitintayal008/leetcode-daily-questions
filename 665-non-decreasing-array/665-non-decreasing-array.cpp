class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n =nums.size(), m = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                if (m != -1) return false;
                m = i;
            }
        }
        return m == -1 || m == 0 || m == n - 2 || (nums[m - 1] <= nums[m + 1]) || (nums[m] < nums[m + 2]);
    }
};