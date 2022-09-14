//Use queue
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root)q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> lvl;
            for(int i=0; i<size; i++){
               TreeNode* curr = q.front();
               lvl.push_back(curr->val);
               if(curr->left)q.push(curr->left);
               if(curr->right)q.push(curr->right);
                q.pop();
            }
            ans.push_back(lvl);
        }
        return ans;
    }
};
//TC - O(n)
//SC - O(n)
