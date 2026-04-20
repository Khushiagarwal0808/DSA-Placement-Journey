# 171. Excel Sheet Column Number

## Problem
Convert Excel column title to number.

## Approach
Treat the string as a base-26 number system.

## Complexity
- Time: O(n)
- Space: O(1)

## Example
Input: "AB"
Output: 28
  class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        
        for(char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        
        return result;
    }
};
