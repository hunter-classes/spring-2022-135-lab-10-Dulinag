#include <iostream>
using namespace std;


class Time {
public:
    int h;
    int m;
};


void printTime(Time time) {
    cout << time.h << ":" << time.m;
}




int main(){

Time time;
  Time now;    // creates a new variable (or object)
  now.h = 17;  // assigns its hours field
  now.m = 45;
  Time t = { 17, 45 };
  std::cout << time.h << ":" << time.m;
}



//
/*
int minutesSinceMidnight(Time time){



}




int minutesUntil(Time earlier, Time later){





}
*/
