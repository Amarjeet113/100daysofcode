class Solution {
public:
    int commonFactors(int a, int b) {
        int x=0;
        int y=min(a,b);
        for(int i=1;i<=y; i++){
            if(a%i==0 && b%i==0){
                x++;
            }
        }
        return x;
        
    }
};
