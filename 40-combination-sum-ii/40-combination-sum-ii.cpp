class Solution {
public:
   
void helper(int i, vector<int>& arr, int t, vector<vector<int>>&ans, vector<int>& sub) {
    if (t == 0)  {
        ans.push_back(sub);
        return;
    }
    if (i == arr.size() || t - arr[i] < 0) return; // check for validity , if we can pick
    sub.push_back(arr[i]); 
    helper(i + 1, arr, t - arr[i], ans, sub); // to pick
    sub.pop_back(); // remove while coming back and pick next nonPicked
    while ((i < arr.size() - 1) && (arr[i + 1] == arr[i])) i++; // avoid duplicates
    helper(i + 1, arr, t, ans, sub); // for not pick
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>>ans;
    vector<int>sub;
    helper(0, candidates, target, ans, sub);
    return ans;
}
};