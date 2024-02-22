//  Find the Town Judge  (LEETCODE)

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        std::vector<int> trustCount(n + 1, 0);
        
        for(auto t : trust) {
            trustCount[t[0]]--; // Decrease trust count for the person who trusts
            trustCount[t[1]]++; // Increase trust count for the person who is trusted
        }
        
        for(int i = 1; i <= n; i++) {
            if(trustCount[i] == n - 1) {
                return i;
            }
        }
        
        return -1;
    }
};
