#pragma once


class Time {
public:
    int h;
    int m;

};
/*
class Movie {
public:
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot {
public:
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

printTimeSlot(TimeSlot ts);
*/

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
void printTime(Time time);
Time addMinutes(Time time0, int min);
