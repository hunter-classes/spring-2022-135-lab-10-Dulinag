main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o 
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp time.h movie.h timeslot.h


main.o: main.cpp time.h movie.h timeslot.h

tests.o: tests.cpp doctest.h time.h movie.h timeslot.h

clean:
	rm -f main.o funcs.o tests.o main tests test.o
