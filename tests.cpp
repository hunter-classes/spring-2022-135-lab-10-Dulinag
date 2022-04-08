#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"
#include "timeslot.h"
#include "movie.h"

TEST_CASE("Checks if minutesSinceMidnight functions properly: "){

  Time time1 = {5, 45};
  Time time2 = {7, 30};

  CHECK(minutesSinceMidnight(time1) == 345);
  CHECK(minutesSinceMidnight(time2) == 450);

}

TEST_CASE("Checks if minutesUntil functions properly: "){

  Time time1 = {5, 45};
  Time time2 = {7, 30};

  CHECK(minutesUntil(time1, time2) == 105);

}

TEST_CASE("Checks if addMinutes functions properly and if the printime function gives the right time: "){

  Time time3 = {8, 10};
  Time time4 = addMinutes(time3, 75);

  CHECK(printTime(time4) == "9:25");

}
TEST_CASE("Checks if getTimeSlot functions properly: " ){

  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  Movie movie3 = {"Pink Panther", ACTION, 160};
  Movie movie4 = {"The Batman", ACTION, 160};

  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  TimeSlot evening2 = {movie3, {18, 45}};

  CHECK(getTimeSlot(morning) == "9:15 , 11:11");

}

TEST_CASE("Checks if scheduleAfter functions properly: "){

  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  Movie movie3 = {"Pink Panther", ACTION, 160};
  Movie movie4 = {"The Batman", ACTION, 160};

  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  TimeSlot evening2 = {movie3, {18, 45}};

  TimeSlot a = scheduleAfter(daytime, movie4);

  CHECK(getTimeSlot(a) == "14:29 , 17:9");

}

TEST_CASE("Checks if a movie overlaps: "){

  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  Movie movie3 = {"Pink Panther", ACTION, 160};
  Movie movie4 = {"The Batman", ACTION, 160};

  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  TimeSlot evening2 = {movie3, {18, 45}};

  TimeSlot a = scheduleAfter(daytime, movie4);

  CHECK(timeOverlap(evening, daytime) == false);

}
