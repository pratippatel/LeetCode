class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        std::vector<int>::iterator it;
        it = std::find (nums.begin(), nums.end(), target);
        
        vector<int> ans;
        if (it != nums.end())
        {
          
            vector<int>::iterator lower, upper;
            lower = lower_bound(nums.begin(), nums.end(), target);
            upper = upper_bound(nums.begin(), nums.end(), target);

            ans.push_back(lower - nums.begin());
            ans.push_back(upper - nums.begin()-1 );
        
            return ans;
        }
        else{
            return {-1,-1};
        }
        
            
        
    }
};