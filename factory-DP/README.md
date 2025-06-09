# README.md

# Factory Design Pattern in C++

This project demonstrates the Factory Design Pattern implemented in C++. It includes a cloud kitchen system that allows for the creation of various food items using factory classes.

## Why Use the Factory Design Pattern?

In complex software systems, object creation can become complicated when classes depend on each other or when the exact types of objects to create are not known until runtime. The Factory Design Pattern addresses these issues by:

- **Encapsulating Object Creation:** Instead of instantiating classes directly, the pattern delegates the responsibility of creating objects to factory classes. This decouples the client code from the concrete classes it needs to instantiate.
- **Promoting Loose Coupling:** Clients interact with interfaces or abstract classes, not concrete implementations. This makes the system more flexible and easier to extend or modify.
- **Supporting Open/Closed Principle:** New types of objects can be introduced with new factory classes without changing existing code, making the system open for extension but closed for modification.
- **Centralizing Creation Logic:** All logic related to object creation is centralized in factory classes, making maintenance and updates easier.

In this project, the cloud kitchen system uses factories to create different food items (like Pizza, Biryani, and Kichdi) without the main application needing to know the details of how each food item is constructed. This makes the codebase easier to manage and extend as new food items are added.

## Project Structure

- `CMakeLists.txt`: Configuration file for building the project using CMake.
- `main.cpp`: Entry point of the application that utilizes the factory classes to create food items.
- `cloudKitchenFactory/`: Contains factory classes for creating different types of food items.
  - `BiryaniFactory.hpp`: Factory class for creating Biryani food items.
  - `ICloudKitchenFactory.hpp`: Interface for cloud kitchen factories.
  - `KichdiFactory.hpp`: Factory class for creating Kichdi food items.
  - `PizzaFactory.hpp`: Factory class for creating Pizza food items.
- `foodItem/`: Contains definitions for food item classes.
  - `Biryani.hpp`: Class representing a Biryani food item.
  - `IFoodItem.hpp`: Interface for food items.
  - `Kichdi.hpp`: Class representing a Kichdi food item.
  - `Pizza.hpp`: Class representing a Pizza food item.

## Building the Project

To build the project, follow these steps:

1. Navigate to the project directory.
2. Create a build directory:
   ```
   mkdir build
   cd build
   ```
3. Run CMake to configure the project:
   ```
   cmake ..
   ```
4. Build the project:
   ```
   make
   ```

## Usage

After building the project, you can run the executable to see the factory pattern in action, creating and displaying different food items.

## License

This project is open-source and available under the MIT License.