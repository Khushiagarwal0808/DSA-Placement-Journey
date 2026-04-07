// Problem: Plus One
// Platform: LeetCode
// Topic: Arrays
// Approach: Carry Forward Logic
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // If all digits were 9
        vector<int> result(n + 1, 0);
        result[0] = 1;
        return result;
    }
};
