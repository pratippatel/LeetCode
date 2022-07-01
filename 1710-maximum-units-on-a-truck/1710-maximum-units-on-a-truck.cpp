class Solution {
public:
    static bool compareInterval( vector<int> &v1, vector<int> &v2)
    {
        
    return (v1[1]>v2[1] );
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
   
    sort(boxTypes.begin(), boxTypes.end(), compareInterval);
    int max = 0;
    for(int i=0;i<boxTypes.size();i++)
        if(truckSize > boxTypes[i][0]){
            max = max + boxTypes[i][0] *boxTypes[i][1];
            truckSize -= boxTypes[i][0];
        }
        else{
            max = max + truckSize *boxTypes[i][1];
            break;
        }
        return max;
    }
};