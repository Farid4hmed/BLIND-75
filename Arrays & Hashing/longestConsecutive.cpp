//The idea is that every sequence has a starting element and that starting element doesnt have a preceding element. So if an element doesn't have a preceding element, then it is a starting element
//We find the max sequence.
//I used HashMap to store the elements as key, to find the element in O(1) Time; NOTE: Value of Keys are not important.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums){
            m[x]++;
        }
        int maxSeq = 0;
        for(int i=0; i<nums.size(); i++){
            int currSeq = 1;
            int num = nums[i];
            if(m.find(num-1) != m.end()){
                maxSeq = max(maxSeq, currSeq);
                continue;
            }
            num++;
            while(m.find(num) != m.end()){
                currSeq++;
                num++;
            }
            maxSeq = max(maxSeq, currSeq);
        }
        return maxSeq;
    }
};
//TC - O(n)
//SC - O(n)
