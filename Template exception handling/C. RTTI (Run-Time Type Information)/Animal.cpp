// 18.	Create a base class Animal and derived classes Dog and Cat. Use typeid to display the type of object at runtime.

#include <iostream>
#include <typeinfo>
using namespace std;

class Animal
{
public:
    virtual ~Animal() = default;
};

class Dog : public Animal {};
class Cat : public Animal {};

int main()
{
    Dog d;
    Cat c;

    Animal* a1 = &d;
    Animal* a2 = &c;

    cout << "Object 1 type: " << typeid(*a1).name() << endl;
    cout << "Object 2 type: " << typeid(*a2).name() << endl;

    return 0;
}