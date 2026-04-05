/*
Problem: Move Zeroes
Platform: LeetCode
Difficulty: Easy

Approach:
- Use two pointers
- One pointer tracks position for next non-zero
- Swap non-zero elements forward

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // position for next non-zero

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
