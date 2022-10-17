class Solution {
public:
    
    int reverse(int n){
        
        int res =0;
        while(n>0){
        
            int k = n%10;
            res = res* 10 +k;
            n = n/10;
        }
        return res;
        
    }
    int countDistinctIntegers(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(),nums.end());
        
        for(int i =0 ;i<nums.size();i++){
            
            int curr = reverse(nums[i]);
            s.insert(curr);
            
        }        
        return s.size();
        
    }
};