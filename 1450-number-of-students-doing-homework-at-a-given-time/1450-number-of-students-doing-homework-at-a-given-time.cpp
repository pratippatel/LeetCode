class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int i =0;
        int count =0;
        while(i<startTime.size()){
            if(startTime[i]<= queryTime && queryTime <= endTime[i]){
                count++;
            }
            i++;
        }
        return count;
    }
};