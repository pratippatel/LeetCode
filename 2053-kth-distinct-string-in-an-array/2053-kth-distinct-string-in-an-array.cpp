class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> freq;
        
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int count =1;
        string ans = "";
        for(int i = 0;i<arr.size();i++){
            if(freq[arr[i]] == 1){
                if(count == k){
                    ans = arr[i];
                }
                count++;
            }
        }
        
        return ans;
    }
};