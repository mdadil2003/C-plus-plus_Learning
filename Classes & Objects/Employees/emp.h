// 5. A class Employee stores name, designation, and salary. Write a program to read details of employees and display the one with the highest salary.

class Employee
{
    private:
        char name[20];
        char designation[20];
   
    public:
        int salary;
        void getDetails();
        void display(int [],int);
        int getsalary();
};
