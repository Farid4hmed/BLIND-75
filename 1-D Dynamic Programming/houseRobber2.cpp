class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        int max1, max2;
        int rob1 = 0, rob2 = 0;
        int curr;
        for(int i=0; i<nums.size()-1; i++){
            curr = max(rob1+nums[i], rob2);
            rob1 = rob2;
            rob2 = curr;
        }
        max1 = rob2;
        rob1=0, rob2=0;
        for(int i=1; i<nums.size(); i++){
            curr = max(rob1+nums[i], rob2);
            rob1 = rob2;
            rob2 = curr;
        }
        max2 = rob2;
        return max(max1, max2);
    }
};
