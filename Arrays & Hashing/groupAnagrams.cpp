//1. iterate through array, store sorted string as key in HashMap, and the original string as the value;
//2. all the strings which have same characters will be grouped in the Hashmap.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        
        for(auto str: strs){
            int count[26] = {0};
            for(int i=0; i<str.size(); i++){
                count[str[i] - 'a'] += 1;
            }
            string s = "";
            for(int i=0; i<26; i++){
                if(count[i] > 0){
                    while(count[i]--){
                        s += char(i + 'a');
                    }
                }
            }
            m[s].push_back(str);
        }
        
        for(auto x: m){
            ans.push_back(x.second);
        }
        return ans;
    }
};

//TC - O(n*(max(string length)))
//SC - O(n)
