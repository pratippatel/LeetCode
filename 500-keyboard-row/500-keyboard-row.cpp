class Solution {
public:
    
    void mapping(unordered_map<char,int> &m , string temp,int x){
        for (int i=0; i< temp.length();i++)
            m[temp[i]] = x;
        
    }
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        
        unordered_map<char,int> m;
        
        mapping(m,s1,0);
        mapping(m,s2,1);
        mapping(m,s3,2);
        
        bool visited;
        vector<string> solution;
        
        for (string &word : words){
            visited = true;
            for (int i = 1; i < word.size();i++){
                if (m[word[i]] != m[word[0]]){
                    visited = false;
                    break;
                }
            }
            if (visited)
                solution.push_back(word);
        }
        return solution;
        
        
    }
};