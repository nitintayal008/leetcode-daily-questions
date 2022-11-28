class Solution {
public:
      static vector<vector<int>> findWinners(const vector<vector<int>>& matches) noexcept {
        vector<vector<int>> ans(2);
        
        unordered_set<int> win;
        unordered_map<int, int> loss;
        
        for (const vector<int>& match : matches) {
            win.insert(match[0]);
            ++loss[match[1]];
        }
        
        for (int p : win)
            if (loss.find(p) == end(loss)) ans[0].push_back(p);
        
        for (auto [p, l] : loss)
            if (l == 1) ans[1].push_back(p);
        
        sort(begin(ans[0]), end(ans[0]));
        sort(begin(ans[1]), end(ans[1]));
        return ans;
    }
};