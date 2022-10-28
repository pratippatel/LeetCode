class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int majority;
        int count =0;
        
        for(int i=0;i<nums.size();i++){
            
            if(count){
                
                count += (majority == nums[i] ? 1 : -1);
                
            }
            else{
                
                majority = nums[i];
                count=1;
                
            }
            
        }
        return majority;
        
    }
};