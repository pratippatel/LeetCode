class Solution {
public:
    class cmp{
        public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> freq;
        
        for(int i=0;i<words.size();i++){
            freq[words[i]]++;
        }
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        
        for(auto each: freq){
            pq.push({each.second,each.first});
        }
        
        vector<string> ans;
        for(int i =0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};