#include <iostream>

/*
Dependency injection involves taking out a common feature/implementation and abstracting/encapsulating
it out to a more broad scope. By doing this, we can "inject" this feature into objects that require
it, such as an engine for different types cars. 

It is essentially an OOP technique.
*/

class Engine {
public:
    virtual void start() {
        std::cout << "Engine is starting...\n";
    }

    virtual ~Engine() = default;
};

// Derived class ElectricEngine
class ElectricEngine : public Engine {
public:
    void start() override {
        std::cout << "Electric engine starting...\n";
    }
};

// Car class WITH Dependency Injection
class Car {
private:
    Engine* engine; // Engine dependency is injected

public:
    // Constructor takes an Engine object as a parameter
    Car(Engine* e) : engine(e) {}
    
    void drive() {
        engine->start(); // Output: "Electric engine starting..."
        std::cout << "Car is driving...\n";
    }
};

int main() {

    ElectricEngine* electricEngine = new ElectricEngine();

    Car myCar(electricEngine);  // Inject the electric engine into car
    myCar.drive();
    
    // Clean up dynamic memory of Engine object
    delete electricEngine;


    return 0;
}
