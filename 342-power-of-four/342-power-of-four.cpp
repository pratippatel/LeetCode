class Solution {
public:
    
    
    bool isPowerOfFour(int n) {
        
     /*  if(n == 1){
           return true;
       }
       while(n!=4 && n>4){
           
        if(n%4 == 0){
            n = n/4;
          }
         else{
             return false;
         }
       }
        if(n == 4){
            return true;
        }
        return false;*/
        
        //4^x == n , x = log(n)/log(4) is a whole number, %1 ==0 for whole number
        
        //cout<<typeid((log(n)/log(4))).name()<<endl;
        double val = (log(n)/log(4));
      
        if(val == floor(val) && val != -1.0 / 0.0){
            return true;
        }
        return false;
      
      
    }
};