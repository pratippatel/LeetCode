class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int left = 0;
        int right = row * col -1;
        
        int mid = left + (right - left)/2;
        
        while(left<=right){
             if(matrix[mid/col][mid%col] == target){
                return true;
            }
            if(matrix[mid/col][mid%col] < target){
                
                left = mid + 1;
            }
            else{  
                right = mid - 1 ;
            }
            mid = left + (right - left)/2;
        }
        return false;
    }
};

