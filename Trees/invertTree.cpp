//The idea is to recursively go to every node and change its left and right node
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)return NULL;
        
        TreeNode* rightNode = invertTree(root->left);
        TreeNode* leftNode = invertTree(root->right);
        root->left = leftNode;
        root->right = rightNode;
        
        return root;
    }
};
//TC - O(n)
//SC - O(1)
