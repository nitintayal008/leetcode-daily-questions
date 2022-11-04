// class Solution {
// public:
//     int climbStairs(int n) {
//         //we can solve this using dp
//         //this has solution similar to fibonacci
//         if(n==0)return 1;
//         if(n==1)return 1;
//         return climbStairs(n-1)+climbStairs(n-2);
         
//     }
// };
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev = 2, prev2 = 1, res;
        for (int i = 3; i <= n; i++) {
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        return res;
    }
};
