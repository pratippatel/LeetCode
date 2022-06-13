class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        if(nums.size() ==1){
            return 0;
        }
        if(nums[0] > nums[1]) return 0;
        if(nums[nums.size()-1] > nums[nums.size()-2]) return nums.size()-1;
        
        while(start<end){
            
            int mid =start + (end - start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]> nums[mid + 1]){
                return mid;
            }
            
            else if(nums[mid]> nums[mid-1] && nums[mid] < nums[mid+1]){
                start = mid;
            }
            else{
                end = mid;
            }
        }
        return -1;
    }
};