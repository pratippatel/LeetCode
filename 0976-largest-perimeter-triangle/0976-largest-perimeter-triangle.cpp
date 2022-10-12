class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int sum = 0;
        int maxPeri =0;
        for(int i = nums.size();i>2;i--){
            
            if(nums[i-2] + nums[i-3] > nums[i-1] && 
               nums[i-1] + nums[i-2] > nums[i-3] && 
               nums[i-3] + nums[i-1] > nums[i-2]){
                
                sum = nums[i-1] + nums[i-2] + nums[i-3];
                maxPeri = max(maxPeri, sum);
            }
            
        }
        
        return maxPeri;
    }
};