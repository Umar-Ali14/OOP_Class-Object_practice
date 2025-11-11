#include<iostream>
using namespace std;

class Account
{
	private:
		int number;
		double balance;
	
	public:
		Account()
		{
			number = 0;
			balance = 0.0;	
		}	
		
		Account(int n, double b)
		{
			number = n;
			balance = b;
		}
		
		void setBalance(double b)
		{
			balance = b;
		}
		
		void setNumber(int n)
		{
			number = n;
		}
		
		double getBalance()
		{
			return balance;
		}
		
		int getNumber()
		{
			return number;
		}
		
		void deposit(double amount)
		{
			balance += amount;
		}
		
		void withdraw(double amount)
		{
			if(amount <= balance)
				balance -= amount;
			else
				cout << "Error: insufficient balance " << endl;
		}
};

int main()
{
	Account obj[3];
	
	cout << "Initial balance :  " << obj[0].getBalance() << endl;
	
	obj[0].setBalance(1000);
	cout << "After setting balance :  " << obj[0].getBalance() << endl;
	
	obj[0].deposit(5000);
	cout << "After depositing, the balance is :  " << obj[0].getBalance() << endl;

	obj[0].withdraw(567.56);
	cout << "After withdrawing, the balance is :  " << obj[0].getBalance() << endl;
}































