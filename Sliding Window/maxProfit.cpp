//start pointer will point at first element
//end pointer will point at second element
//iterate through the array with i=end pointer, if end pointer is smaller than start, update start as end pointer and end as end + 1;
//return the max difference between start and end ever noted
class Solution{
public:
    int maxProfit(vector<int>& prices) {
        int start = 0;
        int maxProf = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < prices[start]){
                start = i;
                continue;
            }
            maxProf = max(maxProf, prices[i] - prices[start]);
        }
        return maxProf;
    }
};

// TC - O(n)
// SC - O(1)
