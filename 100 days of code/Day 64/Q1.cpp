//  Binary Subarrays With Sum  (LEETCODE)

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        int sum = 0, res = 0;
        
        for (int num : nums) {
            count[sum]++;
            sum += num;
            res += count[sum - goal];
        }
        
        return res;
    }
};
