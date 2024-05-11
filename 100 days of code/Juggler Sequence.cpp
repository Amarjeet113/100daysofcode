//  Juggler Sequence  (GFG)

class Solution {
  public:
    // Function to generate the Juggler Sequence
    vector<long long> jugglerSequence(long long n) {
        // Initializing the result vector with the initial number
        vector<long long> res;
        res.emplace_back(n);

        // Loop until the number becomes 1
        while (n > 1) {
            // If the number is odd, perform the juggler equation
            if (n % 2)
                n = (sqrt(n) * n);
            // If the number is even, perform the juggler equation
            else
                n = sqrt(n);

            // Add the number to the result vector
            res.emplace_back(n);
        }

        // Return the final result vector
        return res;
    }
};
