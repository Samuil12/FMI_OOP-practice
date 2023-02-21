// OOP_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Time {
    int hour;
    int minute;
    int second;
    Time get_diff(const Time other_time) const {
        Time result;
        bool sec = false, min = false;
        if (other_time.second - second < 0) {
            result.second = other_time.second + 60 - second;
            sec = true;
        }
        else {
            int result.second = other_time.second - second;
        }
        if (sec == true) {
            if (other_time.minute - minute) {
                int diff_sec = other_time.minute + 59 - minute;
                min = true;
            }
            else { int diff_sec = other_time.minute - 1 - minute; }
        }
        else { int diff_sec = other_time.minute - minute; }
        if (min == true) {
            int diff_hours=other_time.hour-1 - hour;
        }
        else { int diff_hours = other_time.hour - hour; }

        return result;
    }

};

struct Event {
    char title[128];
    char organizer[128];
    Time start_time;
    Time end_time;
    Time get_duration() {
    }
};

int main()
{
    std::cout << "Hello World!\n";
    Time start_time;
    Time end_time;
    start_time.hour = 2;
    end_time.hour = 4;
    start_time.minute = 2;
    end_time.minute = 4;
    start_time.second = 2;
    end_time.second = 4;
    Time duration = start_time.get_diff(end_time);
    std::cout << duration.hour;
}
