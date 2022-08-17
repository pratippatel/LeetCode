class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> map = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> ans;
        
        for(int i = 0;i<words.size();i++){
            string each= "";
            for(int j = 0;j<words[i].size();j++){
                each = each + map[words[i][j]-'a'];
            }
            ans.insert(each);
        }
        return ans.size();
    }
};