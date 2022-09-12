//use priority queue to store the occurence of elements
//iterate through the queue to get the first k elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto x: nums){
            m[x]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto x: m){
            pq.push({x.second, x.first});
        }
        vector<int> ans;
        while(!pq.empty() && k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

// TC - O(n)
// SC - O(n)
