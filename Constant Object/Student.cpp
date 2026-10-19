// 1. Create a class Student with name and roll number. Create a const object and ensure that only constant member functions can be accessed.

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    public:
	    Student(string n, int r) : name(n), rollNo(r) {}
	    void display() const {
	        cout << "Name: " << name << endl;
	        cout << "Roll Number: " << rollNo << endl;
	    }
	    string getName() const {
	        return name;
	    }
	    void changeName(string n) {
	        name = n;
	    }
};

int main() {
    const Student s("Adil", 104);
    s.display();
    cout << "Student Name: " << s.getName() << endl;
    return 0;
}

