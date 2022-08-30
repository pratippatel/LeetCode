class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        
        unordered_map<string,int> mapp;
        
        for(int i=0;i<cpdomains.size();i++){
            int freq;
            for(int j=0;j<cpdomains[i].size();j++){
                
                if(cpdomains[i][j] == ' '){
                     freq = stoi(cpdomains[i].substr(0,j));
                    mapp[cpdomains[i].substr(j+1,cpdomains[i].size())] += freq;
                }
                
                if(cpdomains[i][j] == '.'){
                    mapp[cpdomains[i].substr(j+1,cpdomains[i].size())] += freq;
                }
                
            }
        }
        vector<string> ans;
        for(auto each:mapp){
            string domain = to_string(each.second) +" " +each.first;
            ans.push_back(domain);
        }
        return ans;
    }
};