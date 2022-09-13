//Intuition - one half of the array will always be sorted, find out which have and see if the target element fit in the sorted range else find in the unsorted range, repeat this step.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(l<=r){
            int m = (l+r)/2;
            if(target == nums[m])return m;
            if(nums[m] >= nums[0]){
                if(target < nums[0] || target > nums[m])l = m+1;
                else r = m-1;
            }
            else {
                if(target > nums[n-1] || target < nums[m])r = m-1;
                else l = m+1;
            }
        }
        return -1;
    }
};
//TC - O(logn)
//SC - O(1)
