#include "List.h"
#include <iostream>
#include <iomanip>

using namespace std;


List::List()
	{
		cout << "New list created" << endl;
		m_pHead = NULL;
	}

List::~List()
	{


		//cout << "Destructor" << endl;	

		Workout *temp;

		if(m_pHead != NULL)
		{
			temp = m_pHead;

			while(m_pHead != NULL)
			{
				temp = m_pHead;
				m_pHead=m_pHead->m_pNext;
				delete temp;
			}
		}
	}

bool List::AddWorkout(int id)
	{
		
	}

bool List::RemoveWorkout(int id)
	{
	
	}

void List::PrintWorkoutList()
	{
	
	}
