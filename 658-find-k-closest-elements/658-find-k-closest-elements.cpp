class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& A, int k, int x) {
        int N = A.size();
        int j = lower_bound(begin(A), end(A), x) - begin(A);
        int i = j - 1;
        
        while (k--) {
            if (i == -1 || (j < N && abs(A[j] - x) < abs(A[i] - x))) j++;
            else i--;
        }
        
        return vector<int>(begin(A) + i + 1, begin(A) + j);
    }

   /* vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
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
    }*/
};