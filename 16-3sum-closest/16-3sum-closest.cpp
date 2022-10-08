class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int miniDiff = INT_MAX;
        int ans=0;
        for(int i = 0;i< nums.size()-2;i++){
            
                int low = i+1;
                int high = nums.size()-1;
                
                while(low<high){
                    
                    int sum = nums[i] + nums[low] + nums[high];
                    
                    if(abs(target-sum) < miniDiff)
                    {
                        //cout<<ans;
                        miniDiff = abs(target-sum);
                        ans = sum;
                    }
                   
                    //while(low<high && nums[low] == nums[low+1]) low++;
                    
                    //while(low<high && nums[high] == nums[high-1]) high--;
                    
                    if(sum < target){
                        low++;
                        
                    }
                    else{ 
                        high--;
                    }
                    
            }
        }
        return ans;
    }
};