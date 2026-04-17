/*
===========================================================
LeetCode 88. Merge Sorted Array
===========================================================

🔹 Problem:
You are given two sorted integer arrays nums1 and nums2, and two integers m and n.

- nums1 has size m + n, where:
    - first m elements are valid
    - last n elements are 0 (empty space)

- nums2 has n elements

👉 Merge nums2 into nums1 as one sorted array (in-place).

-----------------------------------------------------------
🔹 Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3

Output:
[1,2,2,3,5,6]

-----------------------------------------------------------
🔹 Approach (Two Pointer - Optimal):

👉 Idea (Hinglish):
Start se merge karne par shifting lagegi (costly).
Isliye hum END se fill karte hain.

Steps:
1. Take 3 pointers:
   - i → last valid element of nums1 (m-1)
   - j → last element of nums2 (n-1)
   - k → last index of nums1 (m+n-1)

2. Compare nums1[i] and nums2[j]
   - Put larger one at nums1[k]

3. Move pointers accordingly

4. If nums2 still has elements → copy them

-----------------------------------------------------------
🔹 Time Complexity:
O(m + n)

🔹 Space Complexity:
O(1) (in-place)

-----------------------------------------------------------
*/

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;        // pointer for nums1
        int j = n - 1;        // pointer for nums2
        int k = m + n - 1;    // pointer for final position

        // Step 1: Compare and fill from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Step 2: If nums2 still has elements
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        // No need to handle remaining nums1 elements
        // because they are already in correct position
    }
};

/*
===========================================================
🔹 Key Notes:
✔ Always fill from the back
✔ Avoid shifting elements (important for interviews)
✔ Classic Two Pointer problem

===========================================================
*/
