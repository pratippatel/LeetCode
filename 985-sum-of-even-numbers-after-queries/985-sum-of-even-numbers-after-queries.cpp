class Solution {
public:
    
    int CalculateSum(vector<int> nums){
        int evenSum = 0;
        for(int i =0;i< nums.size();i++){
            if(nums[i] % 2 ==0){
                evenSum = evenSum + nums[i];
            }
        }
        return evenSum;
    }
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int> ans;
        int evenSum = CalculateSum(nums);
        
        for(int i=0;i<queries.size();i++){
            
            int index = queries[i][1];
            int val = queries[i][0];
            
            if(nums[index] %2 ==0){
                evenSum -= nums[index];
            }
            
            nums[index] = val + nums[index];
            
            if(nums[index] %2 == 0){
                 evenSum += nums[index];
            }
            
            
            ans.push_back(evenSum);
        }
        return ans;
    }
};