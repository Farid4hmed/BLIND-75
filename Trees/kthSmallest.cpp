//Intuition - Array obtained by inorder traversal of a BST is sorted
class Solution {
public:
    vector<int> arr;
    int kthSmallest(TreeNode* root, int k) {
        findArr(root);
        for(int i=0; i<arr.size(); i++){
            if(i+1 == k)return arr[i];
        }
        return -1;
    }
     void findArr(TreeNode* root){
        if(root == NULL)return;
        if(root->left)findArr(root->left);
        arr.push_back(root->val);
        if(root->right)findArr(root->right);
    }
};
//TC - O(n)
//SC - O(n)
