class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, have;
        int needit = 0;
        
        for(int i=0; i<t.size(); i++){
          need[t[i]]++;
            needit++;
        }
        
        int haveit = 0;
        int minLen = INT_MAX;
        string res;
        
        int back = 0;
        for(int i=0; i<s.size(); i++){
            have[s[i]]++;
            if(need.find(s[i]) != need.end()){
                if(need[s[i]] >= have[s[i]])haveit++;
            }
            
           while(haveit == needit && back <= i){
               if(i-back+1 < minLen){
                   minLen = i-back+1;
                   res = s.substr(back, i-back+1);
               }
               if(need.find(s[back]) != need.end()){
                   have[s[back]]--;
               }
               if(have[s[back]] < need[s[back]])haveit--;
               back++;
           }
        }
        
        return res;
    }
};
