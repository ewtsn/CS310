#include <iostream>

using namespace std;

class Vehicle {
   private:
    int wheels;
    string name;

   public:
    Vehicle(int w, string n) : wheels(w), name(n) {}

    void displayInfo() {
        cout << "This is a " << name << " with " << wheels << " wheels." << endl;
    }
};

class Bike : public Vehicle {
   public:
    Bike() : Vehicle(2, "Bike") {}
    void makeSound() {
        cout << "Ding!" << endl;
    }
};

class Car : public Vehicle {
   private:
    Car() : Vehicle(4, "Car") {}
    void makeSound() {
        cout << "Honk!" << endl;
    }
};

int main() {
    Car c();
    c.makeSound();

    Bike b();
    b.makeSound();
}