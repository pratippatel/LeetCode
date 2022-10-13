class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
            
        
        if(n==1 && !trust.size()){
            return n;
        }
        unordered_map<int, list<int>> adjList;
        for(int i=0;i<trust.size();i++){
            
            int u = trust[i][0]-1;
            int v = trust[i][1]-1;
            
            adjList[u].push_back(v);  
        }
        
        vector<int> inorder(n+1,0);
        
        for(auto i : adjList){
            for(auto j : i.second){
                inorder[j]++;
            }
        }
        
        for(int i = 0;i<=n;i++){
            if(inorder[i] == n-1 && adjList[i].size() ==0){
                return i+1;
            }
        }
        
        return -1;
        
    }
};