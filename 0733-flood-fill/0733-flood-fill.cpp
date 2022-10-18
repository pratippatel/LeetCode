class Solution {
public:
    
    void CallDFS(vector<vector<int>> &image, int sr, int sc, int color, int initialValue,
                vector<vector<int>> &visited){
        
        if(sr>=0 && sc>=0 && sr<image.size() && sc<image[0].size() && image[sr][sc] == initialValue && !visited[sr][sc]){
            visited[sr][sc] = true;
            image[sr][sc] = color;
        }
        else{
            return;
        }
        
        
        CallDFS(image, sr + 1,sc, color,initialValue,visited);
        CallDFS(image, sr - 1,sc, color,initialValue,visited);
        CallDFS(image, sr,sc+1, color,initialValue,visited);
        CallDFS(image, sr,sc-1, color,initialValue,visited);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int rows = image.size();
        int cols = image[0].size();
        
        vector < vector < int > > visited(rows, vector< int >(cols,0));
        
        int initialValue = image[sr][sc];
        for(int i =0;i<image.size();i++){
            
            if(!visited[sr][sc]){
                CallDFS(image,sr,sc,color,initialValue,visited);
            }
        }
        return image;
    }
};