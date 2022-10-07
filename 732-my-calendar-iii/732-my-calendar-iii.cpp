#include <map>
class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
    
        int count = 0;
        int maxCount = 0;
        
        mp[start]++;
        mp[end]--;
        
        for(auto each: mp){
            count = count + each.second;
            
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */