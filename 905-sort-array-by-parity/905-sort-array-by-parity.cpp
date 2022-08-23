class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int i = 0;
        int j = nums.size()-1;
        
        while(i<j){
            if(nums[i]%2 != 0 && nums[j]%2 ==0){
                swap(nums[i],nums[j]);
            }
            else if(nums[i]%2 !=0 && nums[j]%2 !=0){
                j--;
                continue;
            }
            else if(nums[j] %2 == 0 && nums[i] %2 ==0){
                i++;
                continue;
            }
            if(nums[i]%2==0){
                i++;
            }
            if(nums[j]%2 != 0){
                j--;
            }
        }
        return nums;
        
    }
};