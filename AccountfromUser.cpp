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
		
		void showDetails(){
			cout<<"Account number: "<<number<<endl;
			cout<<"Current balance: "<<balance<<endl;	
		}
		
		
	};

int main()
{
	Account obj[3];
		int accNo;
		double bal;
		for (int i =0; i<3;i++){
		cout<<"\nEnter Details for Account"<<i+1<<":"<<endl;
		 cout << "Enter Account Number: ";
		  cin>>accNo;
		cout << "Enter Initial Balance: ";
          cin >> bal;
		obj[i].setNumber(accNo);
		obj[i].setBalance(bal);
	}
		cout<<"\n----Accounts ---- Detail----"<<endl;
		for (int i = 0; i < 3; i++) {
        obj[i].showDetails();
    };
}
		
		
	
	
