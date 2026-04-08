// Problem: Climbing Stairs (LeetCode 70)
// Topic: Dynamic Programming
// Approach: Fibonacci / Space Optimized DP
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};
