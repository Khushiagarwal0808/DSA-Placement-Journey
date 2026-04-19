# 191. Number of 1 Bits

## Approach
Used Brian Kernighan’s Algorithm to remove the last set bit using (n & (n-1)).

## Complexity
- Time: O(number of 1 bits)
- Space: O(1)

## Language
C++
  class Solution {
public:
    int hammingWeight(int n) {
          int count = 0;
        
        while (n != 0) {
            n = n & (n - 1); // remove last set bit
            count++;
        }
        
        return count;
    }
};
