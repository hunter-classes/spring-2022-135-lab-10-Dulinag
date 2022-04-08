#pragma once



class Time {
public:
    int h;
    int m;

};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
std::string printTime(Time time);
Time addMinutes(Time time0, int min);
