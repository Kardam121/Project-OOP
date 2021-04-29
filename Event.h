#pragma once
#include<cstring>
#include<iostream>
#include"Date.h"
#include"Hall.h"

class Event {

	char nameOfEvent[20];
	Date dateOfEvent;
	Hall hallOfEvent;

public:
	Event(){}

	Event(char* name, Date date, Hall hall) 
	{

		strcpy_s(nameOfEvent, name);
		dateOfEvent = date;
		hallOfEvent = hall;
	}

	void showAll();
	void setEvent(Hall);
	Date getDate();
	char* getEventName();
	size_t getHallNumber();
};
