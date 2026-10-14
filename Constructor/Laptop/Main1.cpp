#include"input.cpp"
int main()
{ char ab[20];
    int p,q;
    std::cout<<"Enter brand Name, RAM, Price: ";
    cin>>ab;
    cin>>p;
    cin>>q;
    Laptop l(ab,p,q);
    l.display();

}
