class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rmap;
        unordered_map<char, int> mmap;
        
        for(int i=0;i< ransomNote.length();i++){
            rmap[ransomNote[i]]++;
        }
        
        for(int i=0;i< magazine.length();i++){
            mmap[magazine[i]]++;
        }
        
        bool match = true;
        for(int i =0;i<ransomNote.length();i++){
            cout<<mmap[ransomNote[i]]<<endl;
            if(!(rmap[ransomNote[i]] <= mmap[ransomNote[i]])){
                match = false;
            }
            
        }
        return match;
    }
};