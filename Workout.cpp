#include "Workout.h"
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

Workout::Workout()
	{
		cout << "Workout created" << endl;
		
	}

Workout::~Workout()
	{
		cout << "Workout deleted" << endl;
	}

void Workout::setID(int id)
	{
		m_iID = id;
	}

int Workout::getID()
	{
		return m_iID;
	}


void Workout::setdate(int date)
	{
		m_iDate = date;
	}

int Workout::getdate()
	{
		return m_iDate;
	}


void Workout::settype(int type)
	{
		m_iType = type;
	}

int Workout::gettype()
	{
		return m_iDate;
	}


//Performance

void Workout::setdistance(double distance)
	{
		m_dDistance = distance;
	}

double Workout::getdistance()
	{
		return m_dDistance;
	}


 //seconds
void Workout::settime(int time)
	{
		m_iTime = time;
	}

int Workout::gettime()
	{
		return m_iTime;
	}

 //min per mile
void Workout::setavg_pace(double avg_pace)
	{
		m_dAvg_pace = avg_pace;
	}

double Workout::getavg_pace()
	{
		return m_dAvg_pace;
	}


void Workout::setmax_pace(double max_pace)
	{
		m_dMax_pace = max_pace;
	}

double Workout::getmax_pace()
	{
		return m_dMax_pace;
	}


void Workout::setavg_speed(double avg_speed)
	{
		m_dAvg_speed = avg_speed;
	}

double Workout::getavg_speed()
	{
		return m_dAvg_speed;
	}


void Workout::setmax_speed(double max_speed)
	{
		m_dMax_speed = max_speed;
	}

double Workout::getmax_speed()
	{
		return m_dMax_speed;
	}


void Workout::setcalories(int calories)
	{
		m_iCalories = calories;
	}

int Workout::getcalories()
	{
		return m_iCalories;
	}


void Workout::setelevation_gain(int elevation_gain)
	{
		m_iElevation_gain = elevation_gain;
	}

int Workout::getelevation_gain()
	{
		return m_iElevation_gain;
	}



//Weather

void Workout::settemperature(int temperature)
	{
		m_iTemperature = temperature;
	}

int Workout::gettemperature()
	{
		return m_iTemperature;
	}


void Workout::sethumidity(int humidity)
	{
		m_iHumidity = humidity;
	}

int Workout::gethumidity()
	{
		return m_iHumidity;
	}


void PrintWorkoutInfo()
	{
		cout << "Printing Workout Information" << endl;
		cout << "Date" << "Time" << "Temperature" << "Humidity" << endl;

	}

void Workout::setnotes(char *notes)
	{
		strcpy(m_cNotes, notes);
	}

void Workout::getnotes(char *notes)
	{
		strcpy(notes, m_cNotes);
	}

