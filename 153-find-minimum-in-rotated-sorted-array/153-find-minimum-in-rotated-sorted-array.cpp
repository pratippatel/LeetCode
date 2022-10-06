class Solution {
public:
    int findMin(vector<int>& nums) {
        
        
        int start = 0;
        int end = nums.size()-1;
        
        if(nums[start] < nums[end] || nums.size() == 1){
            return nums[start];
        }
        
        while(start<= end){
            
            int mid = start + (end-start)/2;
            
            if(nums[mid] > nums[mid + 1]){
                return nums[mid + 1];
            }
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            
            if(nums[0] < nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return INT_MAX;
        
    }
};