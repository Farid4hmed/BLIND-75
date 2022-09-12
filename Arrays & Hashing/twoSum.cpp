// A+B = target, A = target - B, we store (target - B) in HashMap as key and the index of B as its value;
// iterate through the array, if we find an element equal to (target - B), we have found our A.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[(target - nums[i])] = i;
        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end() && m[nums[i]] != i){
                ans.push_back(i);
                ans.push_back(m[nums[i]]);
                break;
            }
        }
        return ans;
    }
};

//TC - O(n)
//SC - O(n)
