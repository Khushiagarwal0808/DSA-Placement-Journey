// Problem: Add Binary
// Platform: Leetcode
// Problem No: 67
// Difficulty: Easy
// Category: Strings
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;   // Pointer for string a (last index)
        int j = b.length() - 1;   // Pointer for string b (last index)
        
        int carry = 0;            // To store carry during addition
        string result = "";       // Final answer (in reverse initially)

        // Loop until both strings are processed OR carry remains
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;      // Start with carry

            // Add digit from string a if available
            if (i >= 0) {
                sum += a[i] - '0';   // Convert char → int
                i--;
            }

            // Add digit from string b if available
            if (j >= 0) {
                sum += b[j] - '0';   // Convert char → int
                j--;
            }

            // Add current bit to result (sum % 2)
            result += (sum % 2) + '0';

            // Update carry (sum / 2)
            carry = sum / 2;
        }

        // Reverse result because we built it from LSB → MSB
        reverse(result.begin(), result.end());

        return result;
    }
};
