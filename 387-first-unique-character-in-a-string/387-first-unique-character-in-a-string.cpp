class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq(26);
        
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        char ans = ' ';
        
        for(int i=0;i<s.length();i++){
            if(freq[s[i]] == 1){
                ans = s[i];
                break;
            }
        }
        return s.find(ans);
    }
};