class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startingRow = 0;
        int startingCol = 0;
        
        
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
        int traversal = rowsize * colsize;
        
        int endingRow = rowsize - 1;
        int endingCol = colsize - 1;
        int i =0;
        int count = 0;
        
        vector<int> v;
        while(count < traversal)
        {   
            for(i = startingCol; i<= endingCol && count <traversal; i++){
                v.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;          
            for(i = startingRow; i<=endingRow && count <traversal;i++){
                v.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
           
            for(i = endingCol;i>=startingCol && count <traversal;i--){
                v.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for(i=endingRow; i>=startingRow && count <traversal;i--){
                v.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
         }
        return v;
    }
};