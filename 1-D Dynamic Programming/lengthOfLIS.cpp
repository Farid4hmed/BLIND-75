class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        int maxLen = 0;
        for(int i=0; i<nums.size(); i++){
            dp[i] = 1;
            for(int j=i-1; j>=0; j--){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            maxLen = max(maxLen, dp[i]);
        }
        return maxLen;
    }
};
