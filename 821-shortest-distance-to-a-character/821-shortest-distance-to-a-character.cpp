class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> index;
        vector<int> ans(s.length());
        
        for(int i=0;i<s.length();i++){
            if(s[i] == c){
                index.push_back(i);
                ans[i] = 0;
            }
            
        }
        int temp = 0;
        for(int i=0;i<s.length();i++){
            
            if(temp<index.size()-1 && (abs(i - index[temp]) <= abs(i - index[temp+1])) ){
                ans[i] = abs(i - index[temp]);
            }
           
            else if(temp<index.size()-1){
                ans[i] = abs(i - index[temp+1]);
                temp++;
            }
            if(temp == index.size()-1){
                ans[i] = abs(i - index[temp]);
            }
        }     
        
       return ans; 
    }
};