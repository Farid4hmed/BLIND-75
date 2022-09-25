class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(), -1);
        return helper(s, wordDict, 0, dp);
    }
    
    bool helper(string s, vector<string>& wordDict, int i, vector<int>& dp){
        if(i == s.size())return true;
        if(dp[i] != -1)return dp[i];
        bool verdict = false;
        for(auto str: wordDict){
        if(s.substr(i, str.size()) == str)
            if(helper(s, wordDict, i+str.size(), dp))verdict = true;
        }
        return dp[i] = verdict;
    }
};
