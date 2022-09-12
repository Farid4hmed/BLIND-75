//sort the array
//A+B+C = 0 -> B+C = -A which is 2Sum;
//for each element, perform 2Sum with target as -(element).
class Solution {
public:
   vector<vector<int> > threeSum(vector<int> &num) {
    
    vector<vector<int> > res;

    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
        
        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        while (front < back) {
            int sum = num[front] + num[back];
            if (sum < target)
                front++;

            else if (sum > target)
                back--;

            else {
                vector<int> triplet = {num[i], num[front], num[back]};
                res.push_back(triplet);
            
                while (front < back && num[front] == triplet[1]) front++;
                while (front < back && num[back] == triplet[2]) back--;
            }
            
        }
        while (i + 1 < num.size() && num[i + 1] == num[i])i++;

    }
    
    return res;
    
}
};
//TC - O(n^2)
//SC - O(1)
