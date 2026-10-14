// 1. Create a class BankAccount with data members: account number, name, and balance. Write member functions to deposit and withdraw money. Create objects for 3 customers and perform transactions.

class Bankaccount
{
private:
   int acc_number;
   char name[20];
   int balance;
public:
   void get();
   void deposit(int b);
    void withdraw(int b);
     void display();
};
