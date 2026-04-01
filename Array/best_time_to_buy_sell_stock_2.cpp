/*
Problem: Best Time to Buy and Sell Stock II
Platform: LeetCode
Difficulty: Easy

Approach:
- Iterate through prices
- Whenever next day's price is higher, add the profit
- Capture all increasing differences

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 0; i < prices.size() - 1; i++) {
            if(prices[i] < prices[i + 1]) {
                profit += prices[i + 1] - prices[i];
            }
        }

        return profit;
    }
};
