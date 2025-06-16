#pragma once
#include <iostream>


using namespace std;

enum class Engine
{
    Engine110cc,
    Engine125cc,
    EngineCNG
};

enum class HeadLights
{
    Halogen,
    Beam,
    LED
};

enum class Speedometer
{
    Analog,
    Digital
};

// Enum to string conversion functions
inline string to_string(Engine engine) {
    switch (engine) {
        case Engine::Engine110cc: return "Engine110cc";
        case Engine::Engine125cc: return "Engine125cc";
        case Engine::EngineCNG:   return "EngineCNG";
        default:                  return "Unknown Engine";
    }
}

inline string to_string(HeadLights headlight) {
    switch (headlight) {
        case HeadLights::Halogen: return "Halogen";
        case HeadLights::Beam:    return "Beam";
        case HeadLights::LED:     return "LED";
        default:                  return "Unknown HeadLight";
    }
}

inline string to_string(Speedometer speedometer) {
    switch (speedometer) {
        case Speedometer::Analog:  return "Analog";
        case Speedometer::Digital: return "Digital";
        default:                   return "Unknown Speedometer";
    }
}