class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i] == '1'){
                ans.push_back(i);               
            }
        }
        
        vector<int> result;
        for(int i=0;i<boxes.size();i++){
            
            int sum = 0;
            for(int j =0;j<ans.size();j++){
                    
                sum = sum + abs(i-ans[j]);             
                             
            }
            result.push_back(sum);
        }
        return result;
    }
};