#pragma once

#include <iostream>
using namespace std;

class IFoodItem {
public:
    virtual ~IFoodItem() = default; // Virtual destructor for proper cleanup
    virtual void prepareFood() = 0; // Pure virtual function to prepare food
    virtual void showFood() = 0; // Pure virtual function to display food details
};
