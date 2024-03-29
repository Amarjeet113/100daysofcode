// Maximum subarray 


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN,curSum = 0;
        for(int i=0;i<n;i++){
            curSum+= nums[i];
            maxSum= max(maxSum,curSum);
            curSum= max(curSum,0);

        }
        return maxSum;
       
    }
};
