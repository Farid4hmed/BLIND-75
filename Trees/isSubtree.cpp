//check for every node, if the subtree starting from that node is same as the subtree
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL)return true;
        if(subRoot == NULL)return true;
        if(root == NULL)return false;
        
        bool same = isSameTree(root, subRoot);
        
        if(same)return same;
        
        else return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL)return true;
        if(p == NULL || q == NULL)return false;
        
        if(p->val != q->val)return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
