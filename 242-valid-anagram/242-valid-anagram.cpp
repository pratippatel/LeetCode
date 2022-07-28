class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ans;
        
        for(int i=0;i<s.length();i++){
            ans[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            ans[t[i]]--;
        }
        
        for(auto each: ans){
            if(each.second!=0){
                return false;
            }
        }
        return true;
    }
};