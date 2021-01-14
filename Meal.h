#ifndef MEAL_H
#define MEAL_H

class Meal {

private:
	int MealDesc;
	int MealPrice;
	int PublishDate;
	int MealPhoto;

public:
	void NewMeal();

	void UpdateDesc();

	void DeleteMeal();
};

#endif
