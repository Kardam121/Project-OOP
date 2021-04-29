#include<iostream>
#include<cstring>
#include "Hall.h"
#include "Date.h"
#include "Event.h"



int main() {

	
	Hall first(1, 12, 13);
	Hall second(2, 12, 13);
	Hall third(3, 12, 13);
	Hall fourth(4, 12, 13);

	Event events[5];
	int i = 0;
	
	events[i].setEvent(first);

	i++;

	events[i].setEvent(second);

	if (events[i].getDate() == events[i - 1].getDate()&&events[i].getHallNumber()==events[i-1].getHallNumber()) {
		std::cout << "There is another show on this date ";
	}
    
	return 0;
}
