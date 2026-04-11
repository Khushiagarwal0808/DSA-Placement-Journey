/*
Problem: Zigzag Conversion (Leetcode 6)
Category: Strings
Difficulty: Medium

Approach:
- Simulate zigzag traversal using rows
- Toggle direction when reaching top/bottom

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;

            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            currRow += goingDown ? 1 : -1;
        }

        string result = "";
        for (string row : rows)
            result += row;

        return result;
    }
};
