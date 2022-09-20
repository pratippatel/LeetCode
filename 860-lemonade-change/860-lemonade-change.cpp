class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> freq;
        
        for(int i=0;i<bills.size();i++){
            freq[bills[i]]++;
            
            if(bills[i] == 10){
                if(freq[5]>=1){
                    freq[5]--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i] == 20){
                if(freq[10]>=1 && freq[5]>=1){
                    freq[10]--;
                    freq[5]--;
                }
                else if(freq[5]>=3){
                    freq[5] = freq[5] - 3;
                }
                else return false;
            }
        }
        
        
        
        return true;
    }
};