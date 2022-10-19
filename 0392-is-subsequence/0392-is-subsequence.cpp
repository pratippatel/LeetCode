class Solution {
public:
    
    int solve(string s,string t, int i, int j){
        
        if(j == t.size() || i == s.size()){
            return 0;
        }
        
        if(s[i] == t[j]){
             return 1 + solve(s,t,i+1,j+1);
        }
        return solve(s,t,i,j+1);
    }
    
    bool isSubsequence(string s, string t) {
        
        string output = "";
        
        return solve(s,t,0,0) == s.size();
    }
};