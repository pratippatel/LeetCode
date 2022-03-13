#include<stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        
        for(int i = 0 ; i< s.length();i++){
           
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(stk.size()>0){
                    if( stk.top() == '{' && s[i] == '}'){
                        stk.pop();
                    }
                    else if( stk.top() == '[' && s[i] == ']'){
                        stk.pop();
                    }
                    else if( stk.top() == '(' && s[i] == ')'){
                        stk.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(stk.size()>0){
            return false;
        }
        return true;
        
    }
   
};