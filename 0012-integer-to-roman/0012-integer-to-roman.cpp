class Solution {
public:
    string intToRoman(int num) {
        
        vector<pair<string,int>> pq;
        
        pq.push_back({"I",1});
        pq.push_back({"IV",4});
        pq.push_back({"V",5});
        pq.push_back({"IX",9});
        pq.push_back({"X",10});
        pq.push_back({"XL",40});
        pq.push_back({"L",50});
        pq.push_back({"XC",90});
        pq.push_back({"C",100});
        pq.push_back({"CD",400});
        pq.push_back({"D",500});
        pq.push_back({"CM",900});
        pq.push_back({"M",1000});
        
            
        string ans = "";
        
        for(int i = pq.size() -1; i>= 0;i--){
            
            while(num - pq[i].second >= 0){
                cout<<num - pq[i].second<<endl;
                num = num - pq[i].second;
                ans = ans + pq[i].first;
                
            }
        }
        return ans;
    }
};