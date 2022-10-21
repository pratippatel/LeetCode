class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        
        for(int i  =0 ;i<nums.size();i++){
            
            if(freq.find(nums[i]) != freq.end()){
                
                //cout<<i<<" "<<freq[nums[i]]<<endl;
                if(abs(freq[nums[i]]- i) <= k){
                    return true;
                }
                else{
                    freq[nums[i]] = i;
                }
                
            }
            else{
                //cout<<nums[i]<<endl;
                freq[nums[i]] = i;
            }
            
        }
        return false;
        
    }
};