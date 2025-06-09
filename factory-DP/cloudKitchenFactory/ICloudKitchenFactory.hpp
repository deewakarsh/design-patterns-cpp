#pragma once

#include <iostream>
#include "IFoodItem.hpp"
#include <string>
#include <memory>

using namespace std;
using std::unique_ptr;

class ICloudKitchenFactory {
public:
    virtual ~ICloudKitchenFactory() = default; // Virtual destructor for proper cleanup
    virtual unique_ptr<IFoodItem> createFood(const float price) = 0; // Pure virtual function to create food items
};