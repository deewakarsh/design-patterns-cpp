#include<iostream>
#include<string>

using namespace std;

class Car
{
    string car;
    string body;
    string engine;
    public:
        Car(string carType);

        void setEngine(string type);
        void setBody(string body) ;
        string getEngine();
        string getBody();
        
        void show();
};


class CarBuilder
{
    protected:
        Car *car;
    public:
        virtual void getPartsDone() = 0;
        virtual void buildBody() = 0;
        virtual void buildEngine() = 0;
        
        Car* getCar();
};


class BMWBuilder: public CarBuilder 
{
    public:
        void getPartsDone();
        void buildEngine();
        void buildBody();
    
};


class SuzukiBuilder: public CarBuilder 
{
    public:
        void getPartsDone();
        void buildEngine();
        void buildBody();
    
};


class Director
{
    public:
        Car* createCar(CarBuilder *builder) ;
};