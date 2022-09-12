class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score = 0;
        int i=0;
        int j = tokens.size()-1;
        sort(tokens.begin(), tokens.end());
        if(tokens.size() == 1 ){
           if(power<tokens[0]){
                return 0;
           }
           else{
               return 1;
           }
        }
        
        
        while(i<j){
            
            if(power>=tokens[i]){
                power = power - tokens[i];
                score++;
                i++;
            }
            else if(score>0 ){
                power = power + tokens[j];
                score--;
                j--;
            }
            else{
                i++;
            }
        }
        if(i==j && power>=tokens[j]){
            score++;
        }
        return score;
    }
};