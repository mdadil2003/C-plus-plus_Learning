// 1. A class Laptop has data members: brand, RAM, and price. Use a parameterized constructor to initialize and a function to display details.

class Laptop
{
    private:
       char name1[20];
       int ram;
       int price;
    public:
    Laptop(char[],int,int);
    void display();
};