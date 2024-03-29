//   Largest subsquare surrounded by X(GFG)

class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> A) {
        int ROWS = A.size(), COLS = A[0].size();
        vector<vector<vector<int>>> dp(ROWS + 1, vector<vector<int>>(COLS + 1, vector<int>(2, 0)));

        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                if (A[i][j] == 'X') {
                    dp[i + 1][j + 1][0] = dp[i][j + 1][0] + 1;
                    dp[i + 1][j + 1][1] = dp[i + 1][j][1] + 1;
                }
            }
        }

        int maxi = 0;
        for (int i = ROWS; i > 0; --i) {
            for (int j = COLS; j > 0; --j) {
                int curMin = min(dp[i][j][0], dp[i][j][1]);
                while (curMin > maxi) {
                    if (dp[i - curMin + 1][j][1] >= curMin && dp[i][j - curMin + 1][0] >= curMin) {
                        maxi = curMin;
                    } else {
                        --curMin;
                    }
                }
            }
        }
        return maxi;
       
    }
};
