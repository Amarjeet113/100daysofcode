// Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int x = n;
        int var = 0;
        //base case 
        if (n==0)
        return 1;
        while (x!=0){
            var = (var<<1)| 1;
            x= x>>1;
        }
        int ans = (~n) & var;
        return ans;

        
    }
};
