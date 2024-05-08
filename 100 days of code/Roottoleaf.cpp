//  Root To Leaf (LEETCODE)

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> scores;
        for (int i = 0; i < score.size(); i++) {
            scores.push_back({score[i], i});
        }
        sort(scores.begin(), scores.end(), greater<pair<int, int>>());
        
        vector<string> result(score.size());
        for (int i = 0; i < scores.size(); i++) {
            if (i == 0) {
                result[scores[i].second] = "Gold Medal";
            } else if (i == 1) {
                result[scores[i].second] = "Silver Medal";
            } else if (i == 2) {
                result[scores[i].second] = "Bronze Medal";
            } else {
                result[scores[i].second] = to_string(i + 1);
            }
        }
        
        return result;
    }
};


