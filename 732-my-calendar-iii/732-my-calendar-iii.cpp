class MyCalendarThree {
public:
    map<int,int>m;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int res=0;
        int val=0;
        m[start]++;
        m[end]--;
        for(auto it:m){
            val=val+it.second;
            res=max(res,val);
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */