class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> area;
        int n = height.size()-1;
        int val = 0;
        int j = n;
        int i = 0;
        
        int best = INT_MIN;
        while(i<j){
            val = min(height[i],height[j]) * (j-i);
            best = max(best, val);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return best;
    }
};
    