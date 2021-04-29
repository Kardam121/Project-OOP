#include"Event.h"
void Event::showAll() {
	std::cout << "\n";
	dateOfEvent.showDate();
	hallOfEvent.showNumber();
}

void Event::setEvent(Hall h) {
	char n[20];
	std::cin >> n;

	Date d;
	d.setDate();

	strcpy_s(nameOfEvent, n);
	dateOfEvent = d;
	hallOfEvent = h;
}
Date Event::getDate() {

	return dateOfEvent;
}
char* Event::getEventName() {

	return nameOfEvent;
}
size_t Event::getHallNumber() {

  return hallOfEvent.getNum();
}