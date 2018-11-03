#ifndef WORKOUT_H
#define WORKOUT_H 

#include "Length.h"

using namespace std;

class Workout
{

public:

	//Next pointer
	Workout* m_pNext;
	Workout();
	~Workout();

	void setID(int id);
	int getID();
	
	void setdate(int date);
	int getdate();
	
	void settype(int type);
	int gettype();

	//Performance
	
	void setdistance(double distance);
	double getdistance();

	 //seconds
	void settime(int time);
	int gettime();
	 //min per mile
	void setavg_pace(double avg_pace);
	double getavg_pace();
	
	void setmax_pace(double max_pace);
	double getmax_pace();
	
	void setavg_speed(double avg_speed);
	double getavg_speed();
	
	void setmax_speed(double max_speed);
	double getmax_speed();
	
	void setcalories(int calories);
	int getcalories();
	
	void setelevation_gain(int elevation_gain);
	int getelevation_gain();


	//Weather
	
	void settemperature(int temperature);
	int gettemperature();
	
	void sethumidity(int humidity);
	int gethumidity();

	//Misc Notes
	void getnotes(char *notes);
	void setnotes(char *notes);

	//TODO Splits 
	


	//Printing
	void PrintWorkoutInfo();





private:




	//Workout ID
	int m_iID;

	//Workout information
	int m_iDate; //Store as unix timestamp
	int m_iType; //run, walk, hike, bike, etc

	//Performance
	double m_dDistance;
	int m_iTime; //seconds
	double m_dAvg_pace; //min per mile
	double m_dMax_pace;
	double m_dAvg_speed;
	double m_dMax_speed;
	int m_iCalories;
	int m_iElevation_gain;


	//Weather
	int m_iTemperature;
	int m_iHumidity;

	//Misc Notes
	char m_cNotes[1024];

	Length m_lSplits[128];



	
};
#endif