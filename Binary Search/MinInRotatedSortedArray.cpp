//All elements are unique
//If the element has been rotated n times then the array is sorted -> return first element;
//The previous element of the smallest element will be greater
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(nums[0] <= nums[n-1])return nums[0];
        int l = 0;
        int h = n-1;
        int m;
        while(l<=h){
            int m = (l+h)/2;
            if(m!=0 && nums[m] < nums[m-1])return nums[m];
            
            else if(nums[m] >= nums[l]){
                if(nums[l] < nums[h])h = m-1;
                else l = m+1;
            }
            
            else h = m-1;
        }
        return -1;
    }
};
//TC - O(logn)
//SC - O(1)
