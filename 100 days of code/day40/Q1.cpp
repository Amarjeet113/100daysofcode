// 1642. Furthest Building You Can Reach  (LEETCODE)

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> ladder_gaps;
        
        for (int i = 0; i < heights.size() - 1; i++) {
            int gap = heights[i + 1] - heights[i];
            
            if (gap > 0) {
                if (ladders > 0) {
                    ladder_gaps.push(-gap);
                    ladders--;
                } else if (!ladder_gaps.empty() && -ladder_gaps.top() < gap) {
                    bricks += ladder_gaps.top();
                    ladder_gaps.pop();
                    ladder_gaps.push(-gap);
                } else {
                    bricks -= gap;
                }
                
                if (bricks < 0) {
                    return i;
                }
            }
        }
        
        return heights.size() - 1;
    }
};
