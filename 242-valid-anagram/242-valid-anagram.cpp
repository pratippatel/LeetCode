class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ans(26);
        
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