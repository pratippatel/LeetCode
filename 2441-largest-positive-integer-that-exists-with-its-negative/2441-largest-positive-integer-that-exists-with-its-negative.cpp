class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i =0;
        int j= nums.size()-1;
        
        while(i<j){
            
            if(-(nums[i]) == nums[j]){
                return nums[j];
            }
            else if(abs(nums[i])< abs(nums[j])){
                j--;
                continue;
            }
            i++;
        }
        return -1;
    }
};