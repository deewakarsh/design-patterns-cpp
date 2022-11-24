#include <iostream>
#include "factory.hpp"
using namespace std;


    Biryani::Biryani(float amt)
    {
        price = amt;
    }
	void Biryani::prepareFood()  
    { 
        cout << "Preparing Biryani" << endl;
    }
	void Biryani::showFood () 
    { 
        cout << "Biryani Price: " << price << endl;
    }


    Pizza::Pizza(float amt)
    {
        price = amt;
    }
	void Pizza::prepareFood()  
    { 
        cout << "Preparing Pizza" << endl;
    }
	void Pizza::showFood () 
    { 
        cout << "Pizza Price: " << price << endl;
    }


    Khichadi::Khichadi(float amt)
    {
        price = amt;
    }
	void Khichadi::prepareFood()  
    { 
        cout << "Preparing Khichadi" << endl;
    }
	void Khichadi::showFood () 
    { 
        cout << "Khichadi Price: " << price << endl;
    }



	Food * FoodFactory::createFood(foodtype type) {
	
	Food *food = NULL;
	
	switch(type) {
		case Biryani_:{
			food = new Biryani(100.5);
			break;
		}
		case Pizza_:{
			food = new Pizza(50.9);
			break;
		}
		case Khichadi_:{
			food = new Khichadi(60.4);
			break;
		}
		default:{
			cout << "invalid toy type please re-enter type" << endl;
			return NULL;
		}
	}

	food->prepareFood();
	
	return food;
	}
	

int main() {

    FoodFactory *ff = new FoodFactory();
	foodtype type;
    type = Biryani_;
    Food *food = ff->createFood(type);
    if(food){
        food->showFood();
    }
    type = Pizza_;
    food = ff->createFood(type);
    if(food){
        food->showFood();
    }
	
    type = Khichadi_;
    food = ff->createFood(type);
    if(food){
        food->showFood();
    }
	

	return 0;
}