class Solution {
public:
    
    void solve(string s,string t, int i, int j, int &count){
        
        if(j == t.size() || i == s.size()){
            return;
        }
        
        if(s[i] == t[j]){
             count++;
             i = i+1;
        }
        solve(s,t,i,j+1,count);
    }
    
    bool isSubsequence(string s, string t) {
        
        string output = "";
        int count = 0;
        solve(s,t,0,0,count);
        
        return count == s.size();
    }
};