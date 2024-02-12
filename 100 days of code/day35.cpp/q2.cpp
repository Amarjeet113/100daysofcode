//  Recursive Sequence

class Solution {
public:
    // Function to calculate the sum of the sequence
    long long sequence(int n) {
        long long MOD = 1000000007;
        long long x = 1, ans = 0;

        // Loop through each number in the sequence
        for (int i = 1; i <= n; ++i) {
            long long temp = 1;

            // Calculate the product of x in each iteration 
            for (int j = 1; j <= i; ++j) {
                temp = (temp * x) % MOD;
                ++x;
            }

            // Add the product to the sum
            ans = (ans + temp) % MOD;
        }

        // Return the sum of the sequence
        return ans;
    }
};
