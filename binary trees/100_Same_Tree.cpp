LeetCode 100 - Same Tree
Solved using recursion by comparing node values and structure.
  class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Case 1: Both are NULL
        if (p == NULL && q == NULL) {
            return true;
        }

        // Case 2: One is NULL, one is not
        if (p == NULL || q == NULL) {
            return false;
        }

        // Case 3: Values are different
        if (p->val != q->val) {
            return false;
        }

        // Case 4: Check left and right subtree
        return isSameTree(p->left, q->left) && 
               isSameTree(p->right, q->right);
    }
};
