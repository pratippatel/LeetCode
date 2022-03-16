#include<stack>
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int n = s.length();
        stack<int> stkid;
        for(int i = 0; i<s.length();i++){
            if(s[i] == '('){
                stkid.push(i);
            }
            else if(s[i] == ')')
            {
                if(stkid.size() == 0){
                    s[i] = '#';
                }
                else{
                    stkid.pop();
                }
            }
        }
        while(!stkid.empty()){
            s[stkid.top()] = '#';
            stkid.pop();
        }
        
        string res = "";
        for(int i = 0 ; i<n;i++)
        {
            if(s[i] != '#'){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};