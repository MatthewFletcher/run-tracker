# target: dependencies
# 	action

#Create output file named output
output: main.o Workout.o List.o
	g++ main.o Workout.o  -o output


main.o: main.cpp
	g++ -c main.cpp

Workout.o: Workout.cpp Workout.h
	g++ -c Workout.cpp

List.o: List.cpp List.h
	g++ -c List.cpp


clean:
	rm *.o
