class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i = 0; i < numRows; i++){
            //Each nth row has n columns
            result[i].resize(i+1);
            //First and Last element of each row is 1
            result[i][0] = result[i][i] = 1;
            //Each element is the sum of two numbers in the row directly above it
            for(int j = 1; j < i; j++){
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
        return result;
    }
};