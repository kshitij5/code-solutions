#include <bits/stdc++.h>
using namespace std;

class MyCalendar {
public:
    vector<pair<int, int>> bookings;
    MyCalendar() {
        bookings.clear();
        bookings.push_back(make_pair(0, 0));
    }
    
    bool book(int start, int end) {
        if(bookings.size() == 1){
            bookings.push_back(make_pair(start, end));
            return true;
        }
        int i = 0;
        for(i = 0; i < bookings.size()-1; i++){
            if(bookings[i].first > start) break;
        }

        if(bookings[i-1].second > start || bookings[i].first < end)
            return false;

        bookings.push_back(make_pair(start, end));
        sort(bookings.begin(), bookings.end());
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */