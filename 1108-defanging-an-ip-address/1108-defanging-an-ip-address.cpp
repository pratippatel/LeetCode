class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        vector<char> str;
        for(int i=0;i<n;i++){
            
            if(address[i] == '.'){
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
            else{
                str.push_back(address[i]);
            }
        }
        address = "";
        for(int i = 0;i<str.size();i++){
            address.push_back(str[i]);
        }
        return address;
        
    }
};