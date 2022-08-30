class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sumRight = accumulate(nums.begin(),nums.end(),0);
        int sumLeft =0;
        for(int i=0;i<nums.size();i++){
            
            sumRight = sumRight-nums[i];
            if(sumLeft == sumRight){
                return i;
            }
            sumLeft = sumLeft + nums[i];  
        }
        return -1;
        
        
    }
};