class Solution {
public:
    int maxSum = INT_MIN;
    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxSum;
    }
    
    int helper(TreeNode* root){
        if(root == NULL)return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        
        maxSum = max(maxSum, root->val + left + right);
        maxSum = max(maxSum, root->val + max(left, right));
        maxSum = max(maxSum, root->val);
        
        if(left<0 && right<0)return root->val;
        else return (root->val + max(left, right));
    }
};
