//Use Sliding window
//if in the current window, more than k are to be replaced then decrease window from behind else increase from front
class Solution {
public:
    //A-B -> 65 - 90
    int characterReplacement(string s, int k) {
        int l = s.length();
        int longest = 0;
        
        int count[26] = {0};
        int start = 0;
        for(int i=0; i<l; i++){
            count[s[i] - 'A']++;
            int maxEle = 0;
            for(int j=0; j<26; j++)maxEle = max(maxEle, count[j]);
            
            if((i-start+1) - maxEle <= k){
                longest = max(longest, (i-start+1));
            }
            else {
                count[s[start] - 'A']--;
                start++;
            }
        }
        return longest;
    }
};
//TC - O(n)
//SC - O(1)
