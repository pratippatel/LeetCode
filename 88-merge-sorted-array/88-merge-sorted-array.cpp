class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = m-1, j = n - 1;
	 // k will do the main updation...
     int k = nums1.size() - 1;
    
     if(n == 0) return;
    
     while(i >= 0 and j >= 0){
         if(nums1[i] >= nums2[j]){
             nums1[k--] = nums1[i--];
         }else{
             nums1[k--] = nums2[j--];
         }
     }
    
	// if a still has values....
    while(i >= 0){
         nums1[k--] = nums1[i--];
    }
    
	// if b still values....
    while(j >= 0){
         nums1[k--] = nums2[j--];
    }
} 
    
};