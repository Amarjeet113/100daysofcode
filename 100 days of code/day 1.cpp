// Monotonic Array
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int increase = 0, decrease = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                increase = 1;
            if (nums[i] < nums[i + 1])
                decrease = 1;
            if (increase == 1 && decrease == 1)
                return false;
        }
        return true;
    }
};