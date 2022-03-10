class Solution {
public:
    int fib(int n) {
        
        //Base Condition
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        
        
        //Recursive relation.
        int result  = fib(n-1) + fib(n-2);
        
        return result;
        
    }
};