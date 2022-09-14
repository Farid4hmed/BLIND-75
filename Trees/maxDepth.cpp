//Intuition - Max depth lies either on the left node or the right node
//Do recursive DFS for every node
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        int currMax = max(maxDepth(root->left), maxDepth(root->right));
        return currMax+1;
    }
};
//TC - O(n)
//SC - O(1)
