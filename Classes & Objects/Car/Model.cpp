#include"Car.cpp"
int main()
{   Car1 c[3];
    for(int i=0;i<3;i++)
    {
        c[i].getDetails();
        c[i].display();
    }
}