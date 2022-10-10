class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        int left = 0;
        int right = palindrome.size() -1;
        
        string ans = "";
        
        if(palindrome.size()==1){
            return "";
        }
        while(left<right){
           
            if(palindrome[left] == 'a' && palindrome[right] == 'a'){
                left++;
                right--;
            }
            else{
                palindrome[left] = 'a';
                return palindrome;
            }
        }
        
        palindrome[palindrome.size()-1] = 'a' + 1;
        
        
        return palindrome;
    }
};