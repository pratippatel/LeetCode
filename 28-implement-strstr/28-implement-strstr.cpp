class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        for(int i=0,j=needle.size()-1;j<haystack.size();i++,j++){
            if(haystack.substr(i,needle.size())==needle)
                return i;
        }
        return -1;
    }
};