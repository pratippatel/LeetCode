class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
       vector<string> ans;
       unordered_map<string,string> um;
       for(int i=0;i<words.size();i++){
           
           string str = words[i];
           bool count = false;
           sort(words[i].begin(), words[i].end());
           string prev  = str;
           sort(prev.begin(),prev.end());
           if(um.find(words[i]) == um.end()){
               um[words[i]] = str;
               ans.push_back(str);
               
           }
           else if((str == um[words[i]]) && (prev != words[i-1])) {
               ans.push_back(str);
           }
       }
      /*
       for(auto each : um ){
           ans.push_back(each.second);
       }*/
        return ans;
    }
};