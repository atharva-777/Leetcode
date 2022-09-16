class MyCalendar {
    private:
    vector<pair<int,int>>db;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x:db){
            if(max(x.first,start)<min(x.second,end))
                return false;
        }
        db.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */