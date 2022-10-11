class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int low = INT_MAX;
        int mid = INT_MAX;
        
        int i=0;
        while(i<nums.size()){
            
            if(nums[i]< low ){
                low = nums[i];
           
            }
            else if(nums[i] < mid && nums[i] > low){
                mid = nums[i];
            }
            else if(nums[i]> mid){
                return true;
            }
            i++;
        }
        return false;
    }
};