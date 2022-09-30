#include <queue>
#include <algorithm>
class Solution {
public:
    
    void getCoordinates(vector<vector<int>> buildings, vector<vector<int>> &crd){
        
        for(int i =0;i< buildings.size();i++){
            
            int left = buildings[i][0];
            int right = buildings[i][1];
            int height = buildings[i][2];
            
            
            crd.push_back({left, -height});
            crd.push_back({right, height});
            
        }
        
    }
    
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> crd;
        
        getCoordinates(buildings, crd);
        
        sort(crd.begin(), crd.end());
        
        vector<vector<int>> ans;
        multiset<int> pq{0};
        int currheight = 0;
        pq.insert(0);
        
        
        for(int i =0;i< crd.size();i++){
            
            int pt = crd[i][0];
            int ht = crd[i][1];
            
            if(ht<0){
                pq.insert(-ht);
            }
            else{
                pq.erase(pq.find(ht));
            }
            
            auto pqtop = *pq.rbegin();
            if(pqtop != currheight){
                currheight = pqtop;
                ans.push_back({pt,currheight});
            }
        }
        return ans;
        
    }
};