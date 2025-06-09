#pragma once

#include <iostream>
#include "ICloudKitchenFactory.hpp"
#include "Pizza.hpp"
#include <memory>
using namespace std;
class PizzaFactory : public ICloudKitchenFactory {
public:
    // Implementation of createFood method to create Pizza
    unique_ptr<IFoodItem> createFood(const float price) override {
        if (price > 0) {
            return make_unique<Pizza>(price); // Create and return a unique_ptr to Pizza
        }
        cout << "Invalid price for Pizza." << endl;
        return nullptr; // Return nullptr if the food type does not match
    }
};