#include <iostream>
using namespace std;

enum foodtype
{
    Biryani_,
    Pizza_,
    Khichadi_

};

class Food {
protected:
	float price;
public:
	virtual void prepareFood()  = 0;
	virtual void showFood()  = 0;
};

class Biryani : public Food {
public:
    Biryani(float amt);
	void prepareFood();
	void showFood ();
};

class Pizza : public Food {
public:
    Pizza(float amt);
	void prepareFood();
	void showFood ();
};

class Khichadi : public Food {
public:
    Khichadi(float amt);
	void prepareFood();
	void showFood ();
};


class FoodFactory{
public:
	Food * createFood(foodtype type);
	
};
