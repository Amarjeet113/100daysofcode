//  FIBONACCI NUMBER

Class Solution {
public:
    int fib(int n) {
        //base case 
        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        int x = fib(n-1)+fib(n-2);
        return x;
           

        
    }
};
