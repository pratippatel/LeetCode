class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> v;
        int i=0;
        int j = numbers.size()-1;
        int sum=0;
        while(i<j){
            sum = numbers[i] + numbers[j];
            if(sum == target){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            if(sum<target){
                i++;
            }
            else if(sum>target){
                j--;
            }
            
        }
        return v;
        
    }
};