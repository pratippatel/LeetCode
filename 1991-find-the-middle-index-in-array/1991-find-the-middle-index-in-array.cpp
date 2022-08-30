class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
     int sumRight = accumulate(nums.begin(),nums.end(),0);
        
    int sumLeft =0;    
    for(int i =0;i<nums.size();i++){
        
        sumRight = sumRight-nums[i];
        
        if(sumRight == sumLeft){
            return i;
        }
        sumLeft = sumLeft + nums[i];
        
    }
    return -1;
        
    }
};