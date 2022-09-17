class Solution {
public:
    
    void solve(string s, string t, int i, int j,int& count){
       
        if(i==t.length()){
            return;
        }
        else if(s[j] == t[i]){
            count++;
            j= j+1;
        }
        
        solve(s, t,i+1,j, count);
        
    }
    
    bool isSubsequence(string s, string t) {
        
        int count = 0;
        
        int i = 0;
        int j = 0;
        
        solve(s, t, i,j, count);
        
        return s.length() == count;
    }
};
