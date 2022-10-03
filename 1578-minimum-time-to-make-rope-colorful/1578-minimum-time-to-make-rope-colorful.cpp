class Solution {
public:
    int minCost(string colors, vector<int>& t) {
        if (colors.empty()) return 0;
        int n=colors.size();
        stack<int>st;
        int sum=0;
        st.push(0);
        for(int i=1;i<n; ++i){
            if(!st.empty() && colors[st.top()]==colors[i]){
                
               // sum+=min(t[st.top()],t[colors[i]]);-
                //st.pop();
                if(t[st.top()]<=t[i]){
                    sum+=t[st.top()];
                    st.pop();
                    st.push(i);
                }else{
                    sum+=t[i];
                }
            }else{
                st.push(i);
            }
        }
        return sum;
    }
};
// class Solution {
// public:
//     int minCost(string s, vector<int>& cost) {
//         if (s.empty()) return 0;
//         int minCost = 0;
//         stack<int> stk; // stack to maintain indices parsed till now
//         stk.push(0);
//         for (int i = 1; i < s.length(); ++i ) {
//             if (!stk.empty() && s[stk.top()] == s[i]) {
//                 if (cost[stk.top()] <= cost[i]) {
//                     minCost += cost[stk.top()];
//                     stk.pop();
//                     stk.push(i);   
//                 } else {
//                     minCost += cost[i];
//                 }
//             } else {
//                 stk.push(i);
//             }
//         }
//         return minCost;
//     }
// };