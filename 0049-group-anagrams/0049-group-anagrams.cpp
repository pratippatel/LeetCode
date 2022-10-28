class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> freq;
        
        for(int i =0;i< strs.size();i++){
            
            string each = strs[i];
            
            sort(each.begin(), each.end());
            
            if(freq.find(each) != freq.end()){
                freq[each].push_back(strs[i]);
            }
            else{
                freq[each].push_back(strs[i]);
            }
        }
        
        vector<vector<string>> result;
        
        for(auto each: freq){
            result.push_back(each.second);
        }
        return result;
    }
};