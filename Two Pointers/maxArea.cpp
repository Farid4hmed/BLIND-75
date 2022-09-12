//Two pointers on left and right, if left height is smaller then left++, if right height is smaller then right++;
//calculate area for each left and right height
//return the max area;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int i = 0, j = n-1;
        while(i<j){
            int k;
            if(height[i] < height[j])k = i;
            else k = j;
            maxWater = max(maxWater, (j-i) * height[k]);
            if(k==i)i++;
            else if(k==j)j--;
        }
        return maxWater;
    }
};
//TC - O(n)
//SC - O(1)
