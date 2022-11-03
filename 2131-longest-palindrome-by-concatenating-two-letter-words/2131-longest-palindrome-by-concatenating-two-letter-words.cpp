class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        unordered_map<string,int> freq;
        for(int i=0;i<words.size();i++){
            freq[words[i]]++;      
        }
        
        int count = 0;
        int maxodd =0;
        string maxString = "";
        for(int i =0;i<words.size();i++){
            
            string str = words[i];
            reverse(str.begin(), str.end());
            
            if(str == words[i] && freq[str]%2){
                maxodd = max(maxodd, freq[str]);
                if(maxodd == freq[str]){
                    maxString = str;
                }
            }
            if(str == words[i] && freq[str]%2 == 0){
                count= count+ freq[str];
                freq[str]= 0;
            }
            if(freq[str] > 0 && freq[words[i]] > 0 && str != words[i]){
                count = count+2;
                freq[str]--;
                freq[words[i]]--;
            }
        }
        
        count = count + maxodd;
        for(auto each: freq){
            string s = each.first;
            reverse(s.begin(),s.end());
            if(each.first == s && each.second <= maxodd && each.first != maxString && freq[s]%2){
                count = count + (each.second-1);
            }
        }
        return count*2;
       
        
        
        
    }
};