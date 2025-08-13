/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // using the optimal solution.
           if(p == NULL && q != NULL) return false;


           if(p != NULL && q == NULL) return false;

        if(p == NULL && q == NULL) return true;

        bool left1  = isSameTree(p -> left,q->left);
        bool right1 = isSameTree(p -> right,q -> right);

        bool datacheck  = p -> val == q -> val;

        return (left1 && right1 && datacheck);



    }
};