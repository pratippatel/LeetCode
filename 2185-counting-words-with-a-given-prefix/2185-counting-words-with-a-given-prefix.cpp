class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        int s=pref.size();
        
        for(int i=0;i<words.size();i++){
            if(words[i].substr(0,s)==pref){
                res++;
            }
        }
        
        return res;
    }
};