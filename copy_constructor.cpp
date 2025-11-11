#include <iostream>
using namespace std;

class Account {
public:
	int *balance;
    // Constructor
    Account(int b) {
        balance = new int;
        *balance = b;
        cout << "Constructor called\n";
    }

    // Custom Copy Constructor
    Account(Account &obj) {
        balance = new int;
        *balance = *(obj.balance);  // Deep copy
        cout << "Copy constructor called\n";
    }

    void show() {
        cout << "Balance: " << *balance << endl;
    }

    // Destructor
    ~Account() {
        delete balance;  // free memory
        cout << "Destructor called\n";
    }
};

int main() {
    Account a1(5000);
    Account a2 = a1;   // deep copy (custom copy constructor)

    cout << "\nBefore changing a1:\n";
    a1.show();
    a2.show();

    // change a1’s value
    cout << "\nAfter changing a1’s value:\n";
    *(a1.balance) = 8000;   // ? this won’t compile unless balance is public, but assume for concept
    a1.show();
    a2.show();

    return 0;
}

