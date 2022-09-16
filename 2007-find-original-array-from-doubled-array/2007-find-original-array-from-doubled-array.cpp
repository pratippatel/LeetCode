class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        sort(changed.begin(),changed.end());
        unordered_map<int, int> freq;
        vector<int> ans;
        
        for(int i=0;i< changed.size();i++){
            freq[changed[i]]++;    
        }
        
        for(int i =0;i<changed.size();i++){
            if(freq[changed[i]]>0  && freq[changed[i]*2]>0){
                freq[changed[i]]--;
                freq[changed[i]*2]--;
                ans.push_back(changed[i]);
            }
        }
        for(auto each: freq){
           if(each.second != 0){
               return {};
           }
        }
        return ans;
        
        
        
    }
};