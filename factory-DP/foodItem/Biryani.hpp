#pragma once

#include<iostream>
#include "IFoodItem.hpp"
using namespace std;

class Biryani : public IFoodItem {
private:
    float price; // Price of the Biryani
public:
    // Constructor to initialize the price
    Biryani(float amt) : price(amt) {}

    // Implementation of prepareFood method
    void prepareFood() override {
        cout << "Preparing Biryani " << endl;
    }

    // Implementation of showFood method
    void showFood() override {
        cout << "Biryani is ready to be served at price: " << price << endl;
    }
};