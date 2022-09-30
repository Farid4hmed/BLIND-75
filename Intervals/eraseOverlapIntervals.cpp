class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int currLast = intervals[0][1];
        
        int n = intervals.size();
        
        for(int i=1; i<n; i++){
            if(intervals[i][0] < currLast){
                count++;
                currLast = min(currLast, intervals[i][1]);
            }
            else currLast = intervals[i][1];
        }
        return count;
    }
};
