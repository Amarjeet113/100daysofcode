// 

class Solution
{
public:
    //Function to check if the given string can be formed by
    //concatenating words from the dictionary.
    int wordBreak(int n, string s, vector<string> &dictionary) {
        int i, j, k;

        //creating a set to store the words from the dictionary
        set<string> mp;
        for (i = 0; i < n; i++) {
            mp.insert(dictionary[i]);
        }
        int len = (int)s.size();
        //creating a dynamic programming array, initialized as false
        vector<bool> dp(len + 1, false);
        dp[0] = true;

        //iterating through each character of the string
        for (int i = 1; i <= len; i++) {
            //iterating through the substrings of the string
            for (int j = i - 1; j >= 0; j--) {
                //checking if the substring is present in the dictionary
                if (dp[j] && mp.find(s.substr(j, i - j)) != mp.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        //returning the result
        return dp[len];
    }
};
