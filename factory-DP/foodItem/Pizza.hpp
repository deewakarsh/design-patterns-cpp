#pragma once

#include<iostream>
#include "IFoodItem.hpp"
using namespace std;
class Pizza : public IFoodItem {
private:
    float price; // Price of the Pizza
public:
    // Constructor to initialize the price
    Pizza(float amt) : price(amt) {}

    // Implementation of prepareFood method
    void prepareFood() override {
        cout << "Preparing Pizza " << endl;
    }

    // Implementation of showFood method
    void showFood() override {
        cout << "Pizza is ready to be served at price: " << price << endl;
    }
};