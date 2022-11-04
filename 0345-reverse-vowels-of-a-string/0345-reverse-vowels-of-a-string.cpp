class Solution {
public:
    string reverseVowels(string s) {
        int i =0;
        int j = s.length()-1;
        
        unordered_set<char> vowel;
        vowel.insert('a');
        vowel.insert('A');
        vowel.insert('e');
        vowel.insert('E');
        vowel.insert('I');
        vowel.insert('i');
        vowel.insert('o');
        vowel.insert('O');
        vowel.insert('u');
        vowel.insert('U');
        
        while(i<j){
            
            if(vowel.find(s[i]) != vowel.end() && vowel.find(s[j]) != vowel.end()){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(vowel.find(s[i]) != vowel.end()){
                j--;
            }
            else if(vowel.find(s[j]) != vowel.end()){
                i++;
            }
            else{
                i++;
                j--;
            }
            
        }
        return s;
    }
};