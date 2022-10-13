class Solution {
public:
    //if a node has outdegree==0 that means that node doesnot trust anyone and
	//indegree ==n-1 that means all other nodes trusts this node except himself
    /*int findJudge(int n, vector<vector<int>>& trust) {
        
        
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
        
    }*/
    int findJudge(int n, vector<vector<int>>& trust) {
        //this condition is to check if given input is empty but n==1
		
		if(trust.empty() && n==1)
            return 1;
		
		//counts outdegree of a person or node 
		//outdegree means number of nodes that are trusted by given specific node 
        
		vector<int> out(n+1,0);
		
		//counts indegree of a person or node 
		//indegree means number of nodes that trusts a given specific node
        
		vector<int> in(n+1,0);
		
		//loop counts indegree and outdegree
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
		
		//if a node has outdegree==0 that means that node doesnot trust anyone and
		//indegree ==n-1 that means all other nodes trusts this node except himself
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
    }
};
