//   2864. Maximum Odd Binary Number (Leetcode)

class Solution {
public:
    std::string maximumOddBinaryNumber(std::string s) {
        int one = 0, n = s.size();
        for(auto& i : s) {
            one += (i - '0');
        }
        std::string ans = "";
        for(int i = 0; i < one - 1; i++) {
            ans += '1';
        }

        for(int i = 0; i < n - one; i++) {
            ans += '0';
        }
        
        if(one > 0) {
            ans += '1';
        }

        return ans;
    }
};
