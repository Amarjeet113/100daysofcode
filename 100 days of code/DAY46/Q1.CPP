// Cheapest Flights Within K Stops(LEETCODE)

class Solution {
public:
    int findCheapestPrice(int n, std::vector<std::vector<int>>& flights, int src, int dst, int k) {
    std::vector<std::vector<int>> dp(k+2, std::vector<int>(n, INT_MAX));
    
    for(int i = 0; i <= k+1; i++) {
        dp[i][src] = 0;
    }
    
    for(int i = 1; i <= k+1; i++) {
        for(auto& flight : flights) {
            int from = flight[0];
            int to = flight[1];
            int price = flight[2];
            if(dp[i-1][from] != INT_MAX) {
                dp[i][to] = std::min(dp[i][to], dp[i-1][from] + price);
            }
        }
    }
    
    return dp[k+1][dst] == INT_MAX ? -1 : dp[k+1][dst];
}
};
