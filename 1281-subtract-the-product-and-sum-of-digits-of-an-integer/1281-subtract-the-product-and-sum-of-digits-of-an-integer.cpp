class Solution {
public:
    int subtractProductAndSum(int n) {
        int i;
        int prod=1;
        int sum=0;
        while(n>0){
            
            i=n%10;
            sum= sum+i;
            prod = prod*i;
            n=n/10;
        }
        return prod-sum;
    }
};