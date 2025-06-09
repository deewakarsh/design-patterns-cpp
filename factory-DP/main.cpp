#include <iostream>
#include "ICloudKitchenFactory.hpp"
#include "PizzaFactory.hpp"
#include "BiryaniFactory.hpp"
#include "KichdiFactory.hpp"
#include "IFoodItem.hpp"
#include "Pizza.hpp"
#include "Biryani.hpp"
#include "Kichdi.hpp"
#include <memory>

using namespace std;

int main()
{
    // Create factory instances for different food items
    unique_ptr<ICloudKitchenFactory> pizzaFactory = make_unique<PizzaFactory>();
    unique_ptr<ICloudKitchenFactory> biryaniFactory = make_unique<BiryaniFactory>();
    unique_ptr<ICloudKitchenFactory> kichdiFactory = make_unique<KichdiFactory>();

    // Create a Pizza with a valid price
    unique_ptr<IFoodItem> pizza = pizzaFactory->createFood(12.99);
    if (pizza) {
        pizza->prepareFood();
        pizza->showFood();
    }

    // Create a Biryani with a valid price
    unique_ptr<IFoodItem> biryani = biryaniFactory->createFood(15.49);
    if (biryani) {
        biryani->prepareFood();
        biryani->showFood();
    }

    // Create a Kichdi with a valid price
    unique_ptr<IFoodItem> kichdi = kichdiFactory->createFood(8.99);
    if (kichdi) {
        kichdi->prepareFood();
        kichdi->showFood();
    }

    return 0;
}