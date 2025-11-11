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
		
		void print()
		{
			cout << "Number : " << number << " -- Balance : " << balance << endl;
		}
};

int main()
{
	Account obj1;
	Account obj2(123123 , 5000.0);
	
	cout << "obj1 : ";
	obj1.print();
	
	cout << "obj2 : ";
	obj2.print();
	
	return 0;
}































