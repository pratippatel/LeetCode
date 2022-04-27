class Solution {
public:
     vector<string> cellsInRange(string s) {
        vector<string> result;
        int col_one = s[0] - 'A';
        int col_two = s[3] - 'A';
        int row_one = s[1] - '0';
        int row_two = s[4] - '0';
        
        for (int i = col_one; i <= col_two; i++) {
            for (int j = row_one; j <= row_two; j++) {
                
                string value;
                
                value.push_back(i + 'A');
                value.push_back(j + '0');
                
                result.push_back(value);
            }
        }
        return result;
    }
};