class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i =0;
        if(n==0){
            return true;
        }
        if(flowerbed.size() == 1) {
            if(flowerbed[i] == 0 && n==1){
                return true;        
            }
            return false;
        }
        else if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
            flowerbed[i] = 1;
            n--;
        }
        if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0 && n!=0){
            flowerbed[flowerbed.size()-1] = 1;
            n--;
        }
        if(n==0){
            return true;
        }
        for(int i=1;i<flowerbed.size()-2;i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] =1;
                n--;
            }
            if(n==0){
                return true;
            }
        }
        return false;
        
    }
};