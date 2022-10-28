class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, list<int>> freq;
        
        for(int i =0;i< strs.size();i++){
            
            string each = strs[i];
            
            sort(each.begin(), each.end());
            
            if(freq.find(each) != freq.end()){
                freq[each].push_back(i);
            }
            else{
                freq[each].push_back(i);
            }
        }
        
       
        vector<vector<string>> result;
        
        for(auto each: freq){
             vector<string> ans;
            for(auto sep : each.second){
                ans.push_back(strs[sep]);
            }
            result.push_back(ans);
        }
        return result;
    }
};