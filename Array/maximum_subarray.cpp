/*
Problem: Maximum Subarray (Kadane's Algorithm)
Platform: LeetCode
Difficulty: Medium

Approach:
- Maintain current sum
- At each step decide:
  start new OR continue
- Track maximum sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
