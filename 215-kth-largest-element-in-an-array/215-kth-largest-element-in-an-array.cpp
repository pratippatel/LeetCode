class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //Sortin  the Array
        int temp=nums[nums.size()-k]; //size minus the kth largest number
        return temp;
    }
   
};