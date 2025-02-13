#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Constructor
    Animal() {
        cout << "Animal constructor called!" << endl;
    }

    // Destructor
    virtual ~Animal() {
        cout << "Animal destructor called!" << endl;
    }

    // A member function
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal {
public:
    // Constructor
    Dog() {
        cout << "Dog constructor called!" << endl;
    }

    // Destructor
    ~Dog() {
        cout << "Dog destructor called!" << endl;
    }

    // A member function specific to Dog
    void bark() {
        cout << "The dog is barking!" << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Dog myDog;

    // Accessing base class member function
    myDog.eat();

    // Accessing derived class member function
    myDog.bark();

    return 0;
}
