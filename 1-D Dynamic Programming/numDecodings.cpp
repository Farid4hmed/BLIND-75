class Solution {
public:
    
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return decode(s, 0, dp);
    }
    
    int decode(string s, int i, vector<int>& dp){
        if(s[i] == '0')return 0;
        
        if(i == s.length())return 1;
        
        if(dp[i] != -1)return dp[i];
        
        int numWays = decode(s, i+1, dp);
        
        if(i+1 < s.length()){
            if(s[i] == '2' && s[i+1] <= '6')numWays += decode(s, i+2, dp);
            else if(s[i] == '1')numWays += decode(s, i+2, dp);
        }
        dp[i] = numWays;
        return numWays;
    }
};
