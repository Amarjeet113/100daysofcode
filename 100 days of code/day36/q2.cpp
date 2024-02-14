//   Find First Palindromic String in the Array


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i: words){
            string rev =i;
            reverse(rev.begin(),rev.end());

            if(rev == i){
                return i;
            }
        }
         return "";
            
    }
};
