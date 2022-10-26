class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> index;
        index[0] = -1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            
            sum = sum + nums[i];
            int rem = sum % k;
            if(index.find(rem) != index.end()){
                
                //cout<<i<<" "<<index[rem]<<" "<<nums[i]<<endl;
                if(i - index[rem] >= 2){
                    return true;
                }   
            }
            else{
                index[rem] = i;
            }
            
        }
        return false;      
    }
};