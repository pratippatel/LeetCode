class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int totalSum = n * (n+1)/2;
        
        int i =0;
        int j=1;
        
        int sum =0;
        vector<int> ans;
        while(j<n){
            
            if(nums[i] != nums[j]){
                sum = sum + nums[i];
            }
            else if( nums[i] == nums[j]){
                ans.push_back(nums[i]);
            }
            i++;
            j++;
        }
        sum = sum + nums[i];
        
        ans.push_back(totalSum - sum);
        return ans;
    }
};