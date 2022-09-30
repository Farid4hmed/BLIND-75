class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
       int n = intervals.size();
        int i = 1;
        vector<int> curr(2);
        vector<vector<int>> res;
        curr[0] = intervals[0][0];
        curr[1] = intervals[0][1];
        
        while(i<n){
            if(intervals[i][0] <= curr[1]){
                curr[0] = min(curr[0], intervals[i][0]);
                curr[1] = max(curr[1], intervals[i][1]);
            }
            else {
                res.push_back(curr);
                curr[0] = intervals[i][0];
                curr[1] = intervals[i][1];
            }
            i++;
        }
        res.push_back(curr);
        
        return res;
    }
};
