#pragma once

#include<iostream>
#include "IFoodItem.hpp"
#include "Kichdi.hpp"

using namespace std;
class Kichdi : public IFoodItem {
private:
    float price; // Price of the Kichdi
public:
    // Constructor to initialize the price
    Kichdi(float amt) : price(amt) {}

    // Implementation of prepareFood method
    void prepareFood() override {
        cout << "Preparing Kichdi " << endl;
    }

    // Implementation of showFood method
    void showFood() override {
        cout << "Kichdi is ready to be served at price: " << price << endl;
    }
};