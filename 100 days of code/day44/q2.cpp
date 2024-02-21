//  Boolean Parenthesization(GFG)

class Solution{
public:
    
int countWays(int n, string s){
    int mod = 1003;
    vector<vector<int>> dpT(n, vector<int>(n, 0));
    vector<vector<int>> dpF(n, vector<int>(n, 0));
    
    for(int i=0; i<n; i+=2){
        if(s[i] == 'T')
            dpT[i][i] = 1;
        else
            dpF[i][i] = 1;
    }
    
    for(int len = 2; len < n; len += 2){
        for(int i=0; i<n-len; i+=2){
            int j = i + len;
            for(int k=i+1; k<j; k+=2){
                if(s[k] == '&'){
                    dpT[i][j] += dpT[i][k-1] * dpT[k+1][j] % mod;
                    dpF[i][j] += dpT[i][k-1] * dpF[k+1][j] % mod + dpF[i][k-1] * dpT[k+1][j] % mod + dpF[i][k-1] * dpF[k+1][j] % mod;
                }
                else if(s[k] == '|'){
                    dpT[i][j] += dpT[i][k-1] * dpT[k+1][j] % mod + dpT[i][k-1] * dpF[k+1][j] % mod + dpF[i][k-1] * dpT[k+1][j] % mod;
                    dpF[i][j] += dpF[i][k-1] * dpF[k+1][j] % mod;
                }
                else if(s[k] == '^'){
                    dpT[i][j] += dpT[i][k-1] * dpF[k+1][j] % mod + dpF[i][k-1] * dpT[k+1][j] % mod;
                    dpF[i][j] += dpT[i][k-1] * dpT[k+1][j] % mod + dpF[i][k-1] * dpF[k+1][j] % mod;
                }
            }
            dpT[i][j] %= mod;
            dpF[i][j] %= mod;
        }
    }
    
    return dpT[0][n-1];
}
};
