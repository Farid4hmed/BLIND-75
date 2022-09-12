//Use Sliding Window Technique
//start = 0, end = 1;
//increase string from end until no char is repeated, when repeated - decrease string from start, until all occurences become 1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        if(l==0)return 0;
        
        unordered_map<char, int> m;
        
        int longest = 1;
        
        m[s[0]]++;
        
        int start = 0;
        int end = 1;
        while(start < l && end < l){
            m[s[end]]++;
            
            while(m[s[end]] > 1 && start<end)
                m[s[start++]]--;
            
            longest = max(longest, end-start+1);
            
            end++;
        }
        return longest;
    }
};
//TC - O(n)
//SC - O(n)
