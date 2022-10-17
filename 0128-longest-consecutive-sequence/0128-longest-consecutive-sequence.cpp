class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end());
        
        int longeststreak =0;
        for(int i=0;i<nums.size();i++){
            
            if(!s.count(nums[i]-1)){
                
                int currnum = nums[i];
                int currstreak = 0;
                
                while(s.count(currnum)){
                    currnum = currnum+1;
                    currstreak++;
                }
                longeststreak = max(currstreak, longeststreak);   
            }
        }
        return longeststreak;
    }
};