#include <iostream>
#include "builder.hpp"

using namespace std;


    Car::Car(string carType):car{carType} 
    {

    }
    void Car::setEngine(string type) 
    { 
        engine = type; 
    }
    void Car::setBody(string body)   
    { 
        body = body;
    }
    string Car::getEngine()          
    { 
        return engine; 
    }
    string Car::getBody()            
    { 
        return body;   
    }
    
    void Car::show() 
    {
    	cout << "Car Type: " << car << endl;
    	cout << "Body Type: " << body << endl;
    	cout << "Engine Type: "<< engine << endl << endl;
    }


    Car* CarBuilder::getCar()
    { 
        return car; 
    }



    void BMWBuilder::getPartsDone()
    { 
        car = new Car("BMW Car"); 
    }
    void BMWBuilder::buildEngine()  
    { 
        car->setEngine("BMW Engine");   
    }
    void BMWBuilder::buildBody()    
    { 
        car->setBody("BMW Body");   
    }
    

    void SuzukiBuilder::getPartsDone() 
    { 
        car = new Car("Suzuki Car"); 
    }
    void SuzukiBuilder::buildEngine()  
    { 
        car->setEngine("Suzuki Engine");   
    }
    void SuzukiBuilder::buildBody()    
    { 
        car->setBody("Suzuki Body");   
    }
    




    Car* Director::createCar(CarBuilder *builder) 
    {
        builder->getPartsDone();
        builder->buildBody();
        builder->buildEngine();
        return builder->getCar();
    }


int main() {
	
    Director dir;
    BMWBuilder bb;
    SuzukiBuilder sb;

	Car *bmw = dir.createCar(&bb);
	Car *suzuki = dir.createCar(&sb);
	
	bmw->show();
	suzuki->show();
    
    delete bmw;
    delete suzuki;

	return 0;
}