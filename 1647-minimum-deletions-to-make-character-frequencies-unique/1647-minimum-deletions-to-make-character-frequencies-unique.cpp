class Solution {
public:
    int minDeletions(string s) {
        vector<int> arr(26) ;
        int sum =0;
        for(int i = 0;i<s.length();i++){
            arr[s[i]-'a']++; 
        }
        
        for(int i = 0; i<arr.size();i++){
            cout<<arr[i]<<" ";
            sum = sum + arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<<sum<<endl;
        for(int i = 0; i<arr.size()-1; i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[i] == arr[j] && arr[j] !=0){
                    arr[j] = arr[j] - 1;
                    i=0;
                }
            }
        }
          cout<<endl;
        for(int i = 0; i<arr.size();i++){
          
            cout<<arr[i]<<" ";
            sum = sum - arr[i];
        }
        return sum;
    }
};