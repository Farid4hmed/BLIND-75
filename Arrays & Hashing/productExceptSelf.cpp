//Store the product of the whole array excluding zeroes
//count zeroes
//If there are 1 zero, then ans for all elements except that zero will be zero and ans for that zero will be the product of all elements except that zero
//If there are more than 1 zeroes, ans for all elements will be zero
//If no zeroes are present, ans[i] will be product/nums[i];
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zeroes = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeroes++;
            }
            else product *= nums[i];
        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                if(zeroes == 1)ans.push_back(product);
                else ans.push_back(0);
            }
            else if(zeroes>0){
                ans.push_back(0);
            }
            else ans.push_back(product/nums[i]);
        }
        return ans;
    }
};
//TC - O(n)
//SC - O(1) - returning vector (ans) is not included
