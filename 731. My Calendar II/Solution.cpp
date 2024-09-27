class MyCalendarTwo {
public:
    vector<pair<int, int>> ranges;
    vector<pair<int, int>> eventTime;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto& [s, e]:eventTime){
            if(max(start, s)<min(end, e)){
                return false;
            }
        }

        for(auto& [s, e]:ranges){
            if(max(start, s)<min(end, e)){
                eventTime.push_back({max(start, s), min(end, e)});
            }
        }

        ranges.push_back({start, end});
        return true;
    }
};