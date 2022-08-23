class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count = 0;
        for(int i =0 ;i< words.size();i++){
            string word = "";
            for(int j = 0;j< pref.length();j++){
                if(words[i][j] == pref[j]){
                    word = word + words[i][j];
                }
                else{
                    break;
                }
                
            }
            if(word == pref){
                    count++;
                }
        }
        
        return count;
        
    }
};