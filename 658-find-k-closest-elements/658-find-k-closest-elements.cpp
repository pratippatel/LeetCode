class Solution {
public:
    
    /*int binarySearch(vector<int> arr, int x){
        
        int start = 0;
        int end = arr.size()-1;
        
        while(start<end){
            int mid = start - (start-end)/2;
            
            if(arr[mid] == x){
                return mid;
            }
            
            if(arr[mid] < x){
                start = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        return start;
        
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int index = binarySearch(arr, x);
        cout<<index;
        
        int j = index+1;
        
        vector<int> ans;
        
        for(int i = 0 ;i<k;i++){
            
            if(j<arr.size() && index >= 0 && abs(arr[index] - x) <= abs(arr[j] - x)){
                ans.push_back(arr[index]);
                index--;
            }
            else if(j>=arr.size() && index >= 0){
                ans.push_back(arr[index]);
                index--;
            }
            else{
                ans.push_back(arr[j]);
                j++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }*/
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> heap;
        
        for(int i =0;i<arr.size();i++){
            heap.push({abs(arr[i] - x), arr[i]});
            if(heap.size()>k){
                heap.pop();
            }
            
        }
        vector<int> ans(k,1);
        while(k--){
            int temp = heap.top().second;
            ans[k] = temp;
            heap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};