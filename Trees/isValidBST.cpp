//The intuition is that in a BST every node has a range in which it can lie upon
//check if every node is in the range or not
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
    
    bool isValid(TreeNode* root, long long  min, long long max){
        if(root == NULL)return true;
        if(root->val <= min || root->val >= max)return false;
        return isValid(root->left, min, root->val) && isValid(root->right, root->val, max);
    }
    
};
//TC - O(n)
//SC - O(1)
