#include <iostream>
#include "funcs.h"






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





void printTime(Time time) {
    std::cout << time.h << ":" << time.m;
}
