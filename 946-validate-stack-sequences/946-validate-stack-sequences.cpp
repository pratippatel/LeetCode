#include<stack>
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> values;
        int j =0;
        for(int i = 0; i< pushed.size();i++){
            
            values.push(pushed[i]);
            
            while(!values.empty() && values.top() == popped[j]){
                values.pop();
                j++;
            }
        }
         return values.empty();
        
    }
};