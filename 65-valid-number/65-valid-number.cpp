class Solution {
public:
    bool isNumber(string s) {
        int n = s.length();
        bool ans = false;
        int i = 0;
        while(i<n && s[i] == ' '){
            i++;
        }
        if(i<n && (s[i] == '+' || s[i] == '-')){
            i++;
        }
        
        while(i<n && s[i]>='0' && s[i]<= '9'){
            ans = true;
            i++;
        }
        if(i<n && s[i] == '.'){
            if(ans){
                ans= true;
            }
            else{
                ans = false;
            }
            i++;
            while(i<n && s[i]>='0' && s[i]<= '9'){
              ans = true;
              i++;
             
            }
        }
        if(ans && i<n && (s[i] == 'e' || s[i]=='E')){
            ans = false;
            i++;
            if(i<n && (s[i] == '+' || s[i] == '-')){
                i++;
            }
            while(i<n && s[i]>='0' && s[i]<= '9'){
                ans = true;
                i++;
            }
        }
        while(i<n &&s[i] == ' '){
            i++;
        }
           
           
        return ans && i==n;
    
           }
};