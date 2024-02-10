//Palindromic Substrings

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        
        // Create a dp table to store whether s[i...j] is palindrome or not
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        
        // Single characters are palindrome
        for(int i = 0; i < n; i++){
            dp[i][i] = true;
            count++;
        }
        
        // Check for substrings of length 2
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = true;
                count++;
            }
        }
        
        // Check for substrings of length >= 3
        for(int len = 3; len <= n; len++){
            for(int i = 0; i <= n-len; i++){
                int j = i + len - 1;
                
                // Check if s[i...j] is palindrome
                if(s[i] == s[j] && dp[i+1][j-1]){
                    dp[i][j] = true;
                    count++;
                }
            }
        }
        
        return count;
    }
};
