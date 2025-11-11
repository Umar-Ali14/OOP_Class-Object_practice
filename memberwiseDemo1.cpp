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
			cout << "Default constructor" << endl;
			number = 0;
			balance = 0.0;	
		}	
		
		Account(int n, double b)
		{
			cout << "Two-parameterized constructor" << endl;
			number = n;
			balance = b;
		}
		
		Account(const Account &ob)
		{
			cout << "copy constructor " << endl;
			number = ob.number+1;
			balance = ob.balance+10;
		}
		
		void print()
		{
			cout << "Number : " << number << " -- Balance : " << balance << endl;
		}
};

int main()
{
	Account obj2(123123 , 5000.0);
	Account obj1 = obj2;		// Account obj1(obj2);


	cout << "obj1 : ";
	obj1.print();
	
	cout << "obj2 : ";
	obj2.print();
	
	
	
	return 0;
}











