#include<vector>

class Solution {
public:
   
vector<int> countfreq(string word){
    
    vector<int> freq(26,0);
    for(int i=0;i<word.length();i++){
        freq[word[i]- 'a']++;
    }
    return freq;
}
    
    
vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
    
    vector<int> Maxfreq(26);
    
    for(int i=0;i<words2.size();i++){
        vector<int> freq = countfreq(words2[i]);
        for(int i=0;i<26;i++){
            Maxfreq[i] = max(Maxfreq[i], freq[i]);
        }
    }
   
    vector<string> ans;
    for(int i=0;i<words1.size();i++){
        vector<int> tempfreq(26,0);
        tempfreq = countfreq(words1[i]);
        int j=0;
        for(;j<26;j++){
            
            if(tempfreq[j]<Maxfreq[j]){
                break;
            }
        }
       
        if(j==26){
            ans.push_back(words1[i]);
        }
    }
    return ans;
    }
};