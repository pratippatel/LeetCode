class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b){
        
        return a.second>b.second;
    }
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        int start = 0;
        int ans =0;
        
        vector<pair<int,int>> plnt;
        
        for(int i=0;i<plantTime.size();i++){
            plnt.push_back({plantTime[i],growTime[i]});
        }
        
        
        sort(plnt.begin(), plnt.end(), comp);
        
        for(int i =0;i< plnt.size();i++){
            
            start = start + plnt[i].first;
            
            ans = max(ans, start + plnt[i].second );
            
        }
        return ans;
    }
};