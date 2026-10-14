// 3. Create a class Student with roll number, name, and marks. Write a function to calculate grade. Create objects for 3 students and display their results.

class Student
{
private:
    int roll_number;
    char name[20];
    int marks;
public:
    void getDetails();
    char calculateGrade();
    void display();

};