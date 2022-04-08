#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"
#include <string>


int minutesSinceMidnight(Time time){
  return(time.h*60 + time.m);

}



int minutesUntil(Time earlier, Time later){


return(minutesSinceMidnight(later) - minutesSinceMidnight(earlier));


}

Time addMinutes(Time time0, int min){

  Time t1;
  t1.h = time0.h;
  t1.m = time0.m;

  while (min >= 60){
    t1.h++;
    min -= 60;
  }

    if (time0.m + min >= 60){
      t1.h++;
      min = t1.m + min -60;
      t1.m = min;
    }
    else {
      t1.m += min;
    }
    return t1;
  }





std::string printTime(Time time) {
    std::cout << time.h << ":" << time.m;
    std::string s = std::to_string(time.h);
    std::string b = std::to_string(time.m);

    return s + ":" + b ;
}


std::string getTimeSlot(TimeSlot ts){
    std::string g;

    switch (ts.movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g= "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    Time ans = addMinutes(ts.startTime, ts.movie.duration);
    std::string z = std::to_string(ts.startTime.h);
    std::string y = std::to_string(ts.startTime.m);
   std::string s = std::to_string(ans.h);
   std::string b = std::to_string(ans.m);

   std::string c = z + ":" + y + " , " + s + ":" + b;
    std::cout << ts.movie.title << " " << g << " (" << ts.movie.duration << " min)" << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << " ,ends by " <<  ans.h << ":" << ans.m <<"]" << std::endl;
    return c;
}




TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
  TimeSlot t;
  t.startTime = addMinutes(ts.startTime, ts.movie.duration);
  t.movie = nextMovie;

  return t;

}


bool timeOverlap(TimeSlot ts1, TimeSlot ts2){

  if (minutesUntil(ts1.startTime, ts2.startTime) > 0) {

    if (ts1.movie.duration > minutesUntil(ts1.startTime, ts2.startTime)) {
      return true;
      }
  }

    else {
      if (ts2.movie.duration > minutesUntil(ts2.startTime, ts1.startTime)) {
        return true;
      }
    }
    return false;


}
