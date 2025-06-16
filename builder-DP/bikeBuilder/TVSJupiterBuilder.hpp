#pragma once
#include <iostream>
#include <memory>
#include <TVSJupiter.hpp>
#include <Constants.hpp>

using namespace std;

class TVSJupiterBuilder
{
    public:
        virtual void setEngineType(Engine engine) =0;
        virtual void setHeadLightType(HeadLights headlight) =0;
        virtual void setNavigation(bool hasNavigation) =0;
        virtual void setSpeedometerType(Speedometer speedometer) =0;
        virtual void setBodyType(string bodyType) =0;
        virtual std::unique_ptr<TVSJupiter> getBike() =0;

    private:
        std::unique_ptr<TVSJupiter> bike;
};