class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
      
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> angrams;
        
        for(int i = 0;i<strs.size();i++){
            
            string str = strs[i];
            sort(strs[i].begin(),strs[i].end());
            angrams[strs[i]].push_back(str);
        }
        
        for(auto each:angrams){
            ans.push_back(each.second);
        }
        return ans;     
    }
};