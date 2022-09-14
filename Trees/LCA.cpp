//If both the values are smaller than root then the LCA is on the left else it is on the right child
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(p->val > root->val && q->val > root->val)return lowestCommonAncestor(root->right, p, q);
        
        else if(p->val < root->val && q->val < root->val)return lowestCommonAncestor(root->left, p, q);
        
        else return root;
    }
};
//TC - O(n)
