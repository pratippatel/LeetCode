class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); 
        int maxStreak= 0;
        
       
        for(int i =0;i<nums.size();i++){
            int currNumber = nums[i];
            if(!s.count(nums[i] - 1)){
                currNumber = currNumber +1;
                int currStreak = 1;
                
                while(s.count(currNumber)){
                    currNumber++;
                    currStreak++;
                }
                maxStreak = max(currStreak, maxStreak);
            }
        }
        return maxStreak;
    }
};