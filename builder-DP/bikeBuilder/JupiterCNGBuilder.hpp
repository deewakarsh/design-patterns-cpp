#pragma once
#include <iostream>
#include <memory>
#include "TVSJupiterBuilder.hpp"
#include "TVSJupiter.hpp"
#include "Constants.hpp"

using namespace std;

class JupiterCNGBuilder : public TVSJupiterBuilder {
public:
    JupiterCNGBuilder() 
    { 
        bike = make_unique<TVSJupiter>(); 
        bike->setEngineType(Engine::Engine110cc);
    }
    void setEngineType(Engine engine) override 
    {  
        // Engine type is fixed to CNG engine for JupiterCNGBuilder; do nothing.
    }
    void setHeadLightType(HeadLights headlight) override { bike->setHeadLightType(headlight); }
    void setNavigation(bool hasNavigation) override { bike->setNavigationFeature(hasNavigation); }
    void setSpeedometerType(Speedometer speedometer) override { bike->setSpeedometerType(speedometer); }
    void setBodyType(string bodyType) override { bike->setBodyType(bodyType); }
    unique_ptr<TVSJupiter> getBike() override { return std::move(bike); }
private:
    unique_ptr<TVSJupiter> bike;
};