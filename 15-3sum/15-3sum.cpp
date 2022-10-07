class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int i =0;
       
        
        vector<vector<int>> ans;
        for(int i =0;i<nums.size()-2;i++){
             int low =i+1;
             int high = nums.size()-1;
            if(i == 0 ||(i>0 && nums[i] != nums[i-1])){
             while(low<high){
                
                

                    int sum = nums[low]+ nums[high];
                    vector<int> result;
                    if(sum == -(nums[i])){
                        result.push_back(nums[i]);
                        result.push_back(nums[low]);
                        result.push_back(nums[high]);

                        ans.push_back(result);

                        while(low<high && nums[low] == nums[low+1]){
                            low++;
                        }
                        while(low<high && nums[high] == nums[high-1]){
                            high--;
                        }
                        low++;
                        high--;
                    }
                    else if(sum < -(nums[i])){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};