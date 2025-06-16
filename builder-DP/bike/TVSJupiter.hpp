#pragma once

#include <iostream>
#include <string>
#include <Constants.hpp>


using namespace std;

class TVSJupiter 
{
    public:
        // Getter functions
        Engine getEngineType() 
        {
            return engine;
        }
        bool hasNavigationFeature() 
        {
            return navigation;
        }
        HeadLights getHeadLightType() 
        {
            return headLight;
        }
        Speedometer getSpeedometerType() 
        {
            return speedometer;
        }
        string getBodyType() 
        {
            return bodyType;
        }

        // Setter functions
        void setEngineType(Engine eng)
        {
            engine = eng;
        }
        void setNavigationFeature(bool nav)
        {
            navigation = nav;
        }
        void setHeadLightType(HeadLights hl)
        {
            headLight = hl;
        }
        void setSpeedometerType(Speedometer sp)
        {
            speedometer = sp;
        }
        void setBodyType(const string& body)
        {
            bodyType = body;
        }

        void showBike() 
        {
            cout << "Bike Specifications:" << endl;
            cout << "Engine Type: " << to_string(engine) << endl;
            cout << "Navigation Feature: " << (navigation ? "Yes" : "No") << endl;
            cout << "HeadLight Type: " << to_string(headLight) << endl;
            cout << "Speedometer Type: " << to_string(speedometer) << endl;
            cout << "Body Type: " << bodyType << endl;
        }
    
    private:
        Engine engine;
        bool navigation;
        HeadLights headLight;
        Speedometer speedometer;
        string bodyType;
};
