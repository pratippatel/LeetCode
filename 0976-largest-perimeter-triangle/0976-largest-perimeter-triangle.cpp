class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for(int i = nums.size();i>2;i--){
            if(nums[i-2] + nums[i-3] > nums[i-1] ){
                return nums[i-1] + nums[i-2] + nums[i-3];
            }
        }
        
        return 0;
    }
};