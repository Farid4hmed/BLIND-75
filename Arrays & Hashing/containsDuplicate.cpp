//Store elements as key in hashMap and their occurences as Values;
//If at any moment any keys value becomes more than 1 return true;
//Return false otherwise;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto it: nums){
            m[it] += 1;
            if(m[it] > 1)return true;
        }
        return false;
    }
};
