class Solution {
public:
    int countAsterisks(string s) {
        
        int count = 0;
        int ans =0;
        int i = 0;
        while(i<s.length()){
            if(s[i] == '|'){
                count++;
            }
            else if(s[i]== '*' && count%2==0){
                ans++;
            }
            i++;
        }
        return ans;
        
    }
};