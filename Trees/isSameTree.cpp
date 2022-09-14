//Recursive DFS, for every node if their values are equal check for their left part and right part recursively
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)return true;
        else if(p==NULL && q!=NULL || p!=NULL && q==NULL)return false;
        
        if(p->val == q->val){
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};
//TC - O(n)
//SC - O(1)
