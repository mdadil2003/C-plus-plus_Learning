// 19.	Write a program to use dynamic_cast to safely cast a base class pointer to a derived class pointer.

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking!" << endl;
    }
};

int main()
{
    Animal* a = new Dog();

    Dog* d = dynamic_cast<Dog*>(a);

    if (d != nullptr)
    {
        cout << "Conversion successful!" << endl;
        d->bark();
    }
    else
    {
        cout << "Conversion failed!" << endl;
    }

    delete a;

    return 0;
}