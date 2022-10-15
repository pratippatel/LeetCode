#include<string>
class Solution {
public:
    int compress(vector<char>& chars) {
        
        
        int i =0;
        int j =1;
        string s ="";
        while(j<chars.size()){
            
            if(chars[i] == chars[j]){
                j++;
            }
            else if(chars[i] != chars[j]){
                
                int freq = j-i;
                
                if(freq>1){
                    s = s + chars[i] + to_string(freq);
                    
                }
                else{
                    s = s + chars[i];
                }
                i = j;
                j++;
            }
        }
        int freq = j-i;
        if(freq>1){
             s = s + chars[i] + to_string(freq);
        }
        else{
            s = s + chars[i];
        }
        cout<<s<<endl;
        
       
        
        for(int i=0;i<s.length();i++){
            
            chars[i] = s[i];
            
        }
       
        return s.length();
        
        
    }
};