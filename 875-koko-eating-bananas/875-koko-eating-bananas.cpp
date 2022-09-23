class Solution {
public:
    
    // function for checking that is koko can eat the all the bananas within h hours with mid as max. value
    
    bool is_possible(vector<int>& piles, int mid, int h)
    {
        int n = piles.size();
        
        long long req_hour = 0;
        
        for(int i = 0; i < n; i++)
        {
            req_hour += ceil((double) piles[i] / mid);
        }
        
        return req_hour <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        
        // low will be = 1
        
        int low = 1;
        
        // high will be = max. value of the array
        
        int high = *max_element(piles.begin(), piles.end());
        
        // apply binary search and find the min. value of k
        
        int mini = -1;
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(is_possible(piles, mid, h))
            {
                mini = mid;
                
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        return mini;
    }
};