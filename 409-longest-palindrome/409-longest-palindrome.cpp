class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.length();i++){
            
            mp[s[i]]++;
            
        }
        int odd = 0;
        int ans = 0;
        bool isodd=0;
        for(auto each : mp){
            
            if(each.second == 1){
                isodd= true;
            }
            if(each.second%2 == 1 && each.second > 1){
                odd = odd + (each.second-1);
                isodd= true;
            }
            else if(each.second%2 == 0){
                ans = ans+ each.second;
            }
        }
        if(isodd){
           return ans + odd+1;
        }
        return ans + odd;
    }
};