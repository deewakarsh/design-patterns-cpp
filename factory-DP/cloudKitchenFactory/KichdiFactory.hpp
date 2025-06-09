#pragma once

#include <iostream>
#include "ICloudKitchenFactory.hpp"
#include "Kichdi.hpp"
#include <memory>

using namespace std;
class KichdiFactory : public ICloudKitchenFactory {
public:
    // Implementation of createFood method to create Kichdi
    unique_ptr<IFoodItem> createFood(const float price) override {
        if (price > 0) {
            return make_unique<Kichdi>(price); // Create and return a unique_ptr to Kichdi
        }
        cout << "Invalid price for Kichdi." << endl;
        return nullptr; // Return nullptr if the food type does not match
    }
};
// This factory class is responsible for creating Kichdi food items