class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        
        for(;i<nums.size();)
        {
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                j++;     
            }
            i++;
        }
        
    } 
};