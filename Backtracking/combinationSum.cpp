class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        combinations(candidates, curr, 0, target);
        return ans;
    }
    
    void combinations(vector<int> candidates, vector<int>& curr, int idx, int target){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        
        for(int i=idx; i<candidates.size(); i++){
            curr.push_back(candidates[i]);
            if(target - candidates[i] >= 0)
                combinations(candidates, curr, i, target - candidates[i]);
            curr.pop_back();
        }
    }
};
