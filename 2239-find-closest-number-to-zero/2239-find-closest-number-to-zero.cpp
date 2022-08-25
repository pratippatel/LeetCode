class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minDistance = INT_MAX;
        int dis;
        sort(nums.begin(),nums.end());
        for(int i =0;i< nums.size();i++){
            
            dis = abs(nums[i]) - 0;
            
            if(dis<= abs(minDistance)){
                minDistance = nums[i];
            }
            
           
        }
        
        return minDistance;
    }
};