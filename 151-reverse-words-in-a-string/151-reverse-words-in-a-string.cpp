class Solution {
public:
    
    string reverse(string s){
        int start = 0;
        int end = s.length()-1;
        
        while(start< end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }
    
    string reverseWords(string s) {
        
       /* stack<string> reverse;
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
        return word;*/
        string word = "";
        string newword = "";
        for(int i = 0;i<s.length();i++){
             if(s[i] == ' '){
                continue;
            }
            while(s[i] !=' ' && i<s.length()){
                word+= s[i];
                i++;
            }
            newword += reverse(word);
            newword += " ";
            word = "";
            cout<<newword<<endl;
        }
        
        for(int i =newword.size()-2;i>=0;i--){
            word += newword[i];
        }
        return word;
        
    }
};