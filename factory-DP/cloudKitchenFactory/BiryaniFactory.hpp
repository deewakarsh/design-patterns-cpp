#pragma once

#include<iostream>
#include "ICloudKitchenFactory.hpp"
#include "Biryani.hpp"
#include <memory>

using namespace std;
class BiryaniFactory : public ICloudKitchenFactory {
public:
    // Implementation of createFood method to create Biryani
    unique_ptr<IFoodItem> createFood(const float price) override {
        if (price > 0) {
            return make_unique<Biryani>(price); // Create and return a unique_ptr to Biryani
        }
        cout << "Invalid price for Biryani." << endl;
        return nullptr; // Return nullptr if the food type does not match
    }
};