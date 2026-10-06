#include <iostream>
using namespace std;
struct student
{
    int studt;
    char name[20];
    int marks;
};
student read()
{
    student s;
    cout << "Enter Student Id: ";
    cin >> s.studt;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Student Marks: ";
    cin >> s.marks;
    return s;
}
void display(student *ptr)
{
    cout << "Diplay Details";
    cout << ptr->studt << endl;
    cout << ptr->name << endl;
    cout << ptr->marks << endl;
}

int main()
{
    student s;
    cout << " Enter Details " << endl;
    s = read();
    display(&s);
}
