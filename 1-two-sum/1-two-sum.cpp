class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        int j = nums.size() - 1; 
        for(int i=0;i<nums.size();i++){
        if(j > i){
            int sum = 0;
            sum = nums[i] + nums[j];
            if(sum == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(j>0){
                i = i - 1;
                j--;
            }
        }
        else{
            j = nums.size() - 1;
        }
    }
        return ans;
    }
};