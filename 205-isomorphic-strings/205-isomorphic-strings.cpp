class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
      
        if(s.length() != t.length()){
            return false;
        }
        
        unordered_map<char,char> mapST;
        unordered_map<char,char> mapTS;
        
        
        for(int i = 0;i<s.length();i++){
            
            if(mapST.count(s[i]) == 0 && mapTS.count(t[i]) == 0  ){
                
                mapST[s[i]] = t[i];
                mapTS[t[i]] = s[i];
            }
            else if(mapST[s[i]] != t[i] && mapTS[t[i]] != s[i]){
                return false;
            }
        }
      return true;
    }
};