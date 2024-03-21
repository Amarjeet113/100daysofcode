//  Custom Sort String  (LEETCODE)

class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        
        string result = "";
        
        for (char c : order) {
            int freq = count[c - 'a'];
            while (freq > 0) {
                result += c;
                freq--;
            }
            count[c - 'a'] = 0;
        }
        
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            int freq = count[i];
            while (freq > 0) {
                result += c;
                freq--;
            }
        }
        
        return result;
    }
};
