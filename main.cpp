#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"



int main(){


  std::cout<< "Task A: " << std::endl;

  Time time1 = {5, 45};
  Time time2 = {7, 30};

  std::cout <<  "time1: " << minutesSinceMidnight(time1) << std::endl;

  std::cout << "time2: "<< minutesSinceMidnight(time2) << std::endl;
  std::cout<<std::endl;

  std::cout << "minutesUntil: " << minutesUntil(time1, time2) << " minutes." << std::endl;
  std::cout<<std::endl;
    std::cout<< "Task B: " << std::endl;
  Time time3 = {8, 10};
  Time time4 = addMinutes(time3, 75);
  std::cout << "addMinutes: ";
   printTime(time4);
   std::cout<<std::endl;
    std::cout<<std::endl;
  std::cout<< "Task C: " << std::endl;
   Movie movie1 = {"Back to the Future", COMEDY, 116};
   Movie movie2 = {"Black Panther", ACTION, 134};
   Movie movie3 = {"Pink Panther", ACTION, 160};
   Movie movie4 = {"The Batman", ACTION, 160};

   TimeSlot morning = {movie1, {9, 15}};
   TimeSlot daytime = {movie2, {12, 15}};
   TimeSlot evening = {movie2, {16, 45}};
   TimeSlot evening2 = {movie3, {18, 45}};

   getTimeSlot(morning);
  std::cout<<std::endl;
    std::cout<< "Task D: " << std::endl;
    std::cout<< "scheduleAfter:" << std::endl;
      std::cout<<std::endl;
TimeSlot a = scheduleAfter(daytime, movie4);

 getTimeSlot(a);
  std::cout<<std::endl;

  std::cout<< "Task E: " << std::endl;
if(timeOverlap(morning, daytime)){

  std::cout << "true" << std::endl;
}

else {

    std::cout << "false" << std::endl;
}
return 0;
}
