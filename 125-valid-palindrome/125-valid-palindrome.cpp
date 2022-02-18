#include <string>
class Solution {
    
bool isValid(char ch){
    
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9')){
         return 1;
    }
    return 0;
}    

char toLowerCase(char ch){
    return ch - 'A' + 'a';
}
    
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0;i< s.length(); i++){
            if(isValid(s[i])){
                if(s[i]>='A' && s[i]<='Z'){
                    temp.push_back(toLowerCase(s[i]));
                }
                else{
                    temp.push_back(s[i]);
                }
            }
        }
        int i = 0;
        int j= temp.length() -1;
        while(i<=j){
            if(temp[i] == temp[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
     }
};