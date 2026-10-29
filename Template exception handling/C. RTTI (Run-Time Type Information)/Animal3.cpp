// 21.	Write a program with a base class pointer pointing to different derived class objects. Use RTTI (typeid and dynamic_cast) to identify object types at runtime.

#include <iostream>
#include <typeinfo>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog says Woof!" << endl;
    }

    void fetch()
    {
        cout << "Dog is fetching the ball." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat says Meow!" << endl;
    }

    void climb()
    {
        cout << "Cat is climbing." << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    Animal* animals[2] = {&dog, &cat};

    for (int i = 0; i < 2; i++)
    {
        Animal* ptr = animals[i];

        cout << "\nObject type: " << typeid(*ptr).name() << endl;

        ptr->sound();

        Dog* d = dynamic_cast<Dog*>(ptr);
        Cat* c = dynamic_cast<Cat*>(ptr);

        if (d != nullptr)
            d->fetch();
        else if (c != nullptr)
            c->climb();
    }

    return 0;
}
