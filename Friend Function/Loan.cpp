// 3. Create two classes Account and Loan. Use a friend function to check whether the account balance is sufficient for loan eligibility.

#include<iostream>
using namespace std;
class Loan;
class Account
{
	private:
		int accno;
		int balance;
	public:
		friend bool isEligible(Account,Loan);
};
class Loan
{
	private:
		bool eligible;
	public:
		friend bool isEligible(Account,Loan);
};
bool isEligible(Account a,Loan l)
{
	std::cout<<"Enter the account number and balance"<<endl;
	cin>>a.accno>>a.balance;
	if(a.balance>10000)
	  l.eligible=true;
	else
	  l.eligible=false;
	return l.eligible;
	
}
int main()
{
	Account a;
	Loan l;
	bool b=isEligible(a,l);
	if(b)
	  std::cout<<"Eligible"<<endl;
	else
	  std::cout<<"Not eligible"<<endl;
}
