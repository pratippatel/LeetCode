class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> reverse;
        string word;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i] == ' '){
                continue;
            }
            while(s[i] !=' ' && i<s.length()){
                word+= s[i];
                i++;
            }
            reverse.push(word);
            word = "";
        }
        int n = reverse.size();
        for(int i = 0; i<n;i++){
            word += reverse.top();
            if(reverse.size() !=1){
                word += ' ';
            }
            reverse.pop();
        }
        return word;
    }
};