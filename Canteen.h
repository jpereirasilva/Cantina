#ifndef CANTEEN_H
#define CANTEEN_H

class Canteen {

private:
	int CampusLocation;
	int LunchHours;
	int DinnerHours;
	int MealPrice;
	int ExtraPrice;

public:
	void NewCantine();

	void EditeCantine();

	void DeleteCantine();

	void GetMenu();
};

#endif
