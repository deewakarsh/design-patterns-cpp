#include <iostream>
#include <memory>
#include <TVSJupiter.hpp>
#include <Constants.hpp>
#include <TVSJupiterBuilder.hpp>
#include <Jupiter110Builder.hpp>
#include <Jupiter125Builder.hpp>
#include <JupiterCNGBuilder.hpp>

using namespace std;

int main()
{
    std::unique_ptr<TVSJupiterBuilder> jupiter110ccbuilder = make_unique<Jupiter110Builder>();
    jupiter110ccbuilder->setBodyType("Plastic");
    jupiter110ccbuilder->setHeadLightType(HeadLights::Halogen);
    jupiter110ccbuilder->setNavigation(false);
    jupiter110ccbuilder->setSpeedometerType(Speedometer::Analog);
    auto bike110cc = jupiter110ccbuilder->getBike();
    bike110cc->showBike();

    std::unique_ptr<TVSJupiterBuilder> jupiter125ccbuilder = make_unique<Jupiter125Builder>();
    jupiter125ccbuilder->setBodyType("Metal");
    jupiter125ccbuilder->setHeadLightType(HeadLights::LED);
    jupiter125ccbuilder->setNavigation(true);
    jupiter125ccbuilder->setSpeedometerType(Speedometer::Digital);
    auto bike125cc = jupiter125ccbuilder->getBike();
    bike125cc->showBike();

    std::unique_ptr<TVSJupiterBuilder> jupiterCNGbuilder = make_unique<JupiterCNGBuilder>();
    jupiterCNGbuilder->setBodyType("Plastic");
    jupiterCNGbuilder->setHeadLightType(HeadLights::Beam);
    jupiterCNGbuilder->setNavigation(false);
    jupiterCNGbuilder->setSpeedometerType(Speedometer::Analog);
    auto bikeCNG = jupiterCNGbuilder->getBike();
    bikeCNG->showBike();
}