class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        bool negative = false;
        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
       
        if(s[i]=='-'){
            i++;
            negative = true;
        }
        else if(s[i]=='+'){
            i++;
            negative = false;
        }

        while(s[i]>='0' && s[i] <='9' && i<s.length()){
            
            int num = s[i]-'0';
            if(ans > INT_MAX/10 || ans == INT_MAX/10 && num >= 8 ){
                return negative?INT_MIN:INT_MAX;
            }
            ans = ans*10 + num;
            i++;
            
        }
          return negative?(-1 * ans):ans;
    }
};