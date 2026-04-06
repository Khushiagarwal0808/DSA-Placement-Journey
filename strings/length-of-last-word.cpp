// Problem: Length of Last Word (LeetCode 58)
// Link: https://leetcode.com/problems/length-of-last-word/
// Approach: Traverse from end, skip spaces, count characters

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        while (i >= 0 && s[i] == ' ') i--;

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
