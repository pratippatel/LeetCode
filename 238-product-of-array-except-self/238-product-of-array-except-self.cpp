class Solution {
public:
    /*vector<int> productExceptSelf(vector<int>& nums) {
        
        int ans = 1;
        int exp = -1;
        int count = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0){
                exp = i;
                count++;
                continue;
            }
            ans = ans * nums[i];
        }
        
        vector<int> result(nums.size(),0);
        if(count>1){
            return result;
        }
        else if(exp == -1){
            for(int i=0;i<nums.size();i++){
                result[i] = ans/nums[i];
            }
        }
        else{
            cout<<exp<<endl;
            result[exp] = ans;
        }
        return result;
    }*/
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r(nums.size(),1);
        for (auto i=1;i<nums.size();++i){
            r[i]=r[i-1]*nums[i-1];
        }
        int multiplier=nums.back();
        for (int i=nums.size()-2;i>=0;--i){
            r[i]=r[i]*multiplier;
            multiplier*=nums[i];
        }
        return r;
}
};

