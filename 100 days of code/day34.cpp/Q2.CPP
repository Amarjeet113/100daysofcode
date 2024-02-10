//

class Solution {
public:
    // Dynamic programming array to store results
    long long dp[101][101][101];
    // Array to store the values of the grid
    int a[101][101];
    
    // Recursive function to find the number of paths
    long long go(int n,int m,int k)
    {
        // Base cases
        if(k<0)
            return 0;
        if(m<0||n<0)
            return 0;
        if(n==0&&m==0)
            return dp[n][m][k]=(k==a[n][m]);
            
        // If result already calculated, return it
        if(dp[n][m][k]!=-1)
            return dp[n][m][k];
            
        // Calculate number of paths by moving left and up
        long long left = go(n,m-1,k-a[n][m]);
        long long up = go(n-1,m,k-a[n][m]);
        
        // Store the result in dp array
        return dp[n][m][k] = left + up;
    }
    
    // Function to find the number of paths
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        // Copy the grid values into array a
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = arr[i][j];
            }
        }
        
        // Initialize dp array with -1
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int l=0;l<=k;l++)
                    dp[i][j][l]=-1;
        
        // Call the recursive function to find the number of paths
        go(n-1,n-1,k);
        
        // Return the result
        return dp[n-1][n-1][k];
    }
};
