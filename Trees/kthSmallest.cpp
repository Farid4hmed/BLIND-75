//Intuition - Array obtained by inorder traversal of a BST is sorted
class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) 
    {
        if(root==NULL) return -1;
        
        int left=kthSmallest(root->left,k);          // left recursive call
        
        if(left!=-1) return left;                      // if we get answer from left call than return it
        k--;
        if(k==0) return root->val;                 // this is kth smallest element
         
        int right=kthSmallest(root->right,k);     // right recursive call
        
        if(right!=-1) return right;                   // if we get answert from right call than return it
        
        return -1;                                 // return -1 if we not get answer from this call
    }
};
//TC - O(height + k)
//SC - O(1)
