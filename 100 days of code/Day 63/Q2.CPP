//  Generalised Fibonacci numbers   (GFG)

class Solution {
  public:
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        if (n == 1 || n == 2)
        return 1 % m;
    
    int prev_prev = 1 % m;
    int prev = 1 % m;
    
    for (int i = 3; i <= n; ++i) {
        int current = (a * prev + b * prev_prev + c) % m;
        prev_prev = prev;
        prev = current;
    }
    
    return prev;// code here
    }
};
