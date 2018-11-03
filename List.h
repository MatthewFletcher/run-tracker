#include "Workout.h"


#ifndef LIST_H
#define LIST_H 

class List
{

private:


public:
	//Root for linked list
	Workout* m_pHead;
	List();
	~List();
	bool AddWorkout(int id);
	bool RemoveWorkout(int id);
	void PrintWorkoutList();





	
};

#endif