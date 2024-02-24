//  Maximum Sum Problem(GFG)


class Solution {
public:
    int maxSum(int n)
    {
        // base conditions
        if (n == 0 || n == 1)
            return n;

        // recursively break the number and return
        // what maximum you can get
        return max(
            (maxSum(n / 2) + maxSum(n / 3) + maxSum(n / 4)),
            n);
    }
};
