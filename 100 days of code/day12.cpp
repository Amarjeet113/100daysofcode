//  Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int x = 0;
        vector<int>count(256);
        for (int i=0,r=0;r<s.length();++r){
            ++count[s[r]];
            while (count[s[r]]>1)
            --count[s[i++]];
            x= max(x,r-i+1);
        }
        return x;
        
    }
};
