//  Bag of Tokens (LEETCODE)

class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) {
        std::sort(tokens.begin(), tokens.end());
        int score = 0, maxScore = 0;
        int i = 0, j = tokens.size() - 1;
        
        while (i <= j) {
            if (power >= tokens[i]) {
                power -= tokens[i];
                i++;
                score++;
                maxScore = std::max(maxScore, score);
            } else if (score > 0) {
                power += tokens[j];
                j--;
                score--;
            } else {
                break;
            }
        }
        
        return maxScore;
    }
};
