class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int i =0;
        int m =l.size();
        
        vector<bool> ans;
        for(int i=0;i<m;i++){
            vector<int> sub={};
            for(int j = l[i];j<=r[i];j++){
                
                sub.push_back(nums[j]);
            }
            sort(sub.begin(),sub.end());
            
            int d = sub[1] - sub[0];
            bool apcheck = true;
            for (int i = 2; i < sub.size(); i++){
                if (sub[i] - sub[i - 1] != d)
                     apcheck = false;   
            }
            ans.push_back(apcheck);
    }
        return ans;
    }
};