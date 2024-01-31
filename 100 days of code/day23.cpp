//  reverse string

class Solution {
public:
    void reversestring(vector<char> &str, int i, int j){
        if(i > j) return;
        swap(str[i], str[j]);
        i++;
        j--;
        reversestring(str, i, j);
    }
    void reverseString(vector<char>& s) {
        reversestring(s, 0, s.size()-1);
    }
};
