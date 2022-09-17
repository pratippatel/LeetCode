class Solution {
public:
    
    int solve(string s, string t, int i, int j){
       
        if(i<0 || j < 0){
            return 0;
        }
        
        if(s[i] == t[j]){
            return 1 + solve(s,t,i-1,j-1);
        }
        else{
               // cout<<s[i]<<" "<<t[j];
            return solve(s,t,i,j-1);
        }
       
        
    }
    
    bool isSubsequence(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        int count = solve(s, t, n-1,m-1);
        cout<<count;
        return count == n;
    }
};
