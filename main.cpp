#include <iostream>
#include "funcs.h"





int main(){




  Time time1 = {5, 45};
  Time time2 = {7, 30};

  std::cout <<  "time1: " << minutesSinceMidnight(time1) << std::endl;
  std::cout << "time2: "<< minutesSinceMidnight(time2) << std::endl;

  std::cout << "minutesUntil: " << minutesUntil(time1, time2) << " minutes." << std::endl;

  Time time3 = {8, 10};
  Time time4 = addMinutes(time3, 75);
  std::cout << "addMinutes: ";
   printTime(time4);
   std::cout<<std::endl;

   

}
