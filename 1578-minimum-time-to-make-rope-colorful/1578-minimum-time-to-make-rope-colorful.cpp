class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
           
        int j =1, sum =0;
        for(int i=0;i< colors.length()-1;i++){
            
            if(colors[i] == colors[j]){
                
                if(neededTime[i]<neededTime[j]){
                    
                    sum = sum + neededTime[i];
                    i = j-1;
                    
                }
                else{
                    sum = sum + neededTime[j];
                   
                    i--;
                }
            }
            else{
                i = j-1;
            }
            j++;
        }
        return sum;
    }
};