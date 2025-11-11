#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int *scores;    // Dynamic array for project scores
    int numProjects;

public:
    // Default Constructor
    Employee() {
        name = "Unknown";
        numProjects = 0;
        scores = NULL;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor
    Employee(string n, int projects) {
        name = n;
        numProjects = projects;
        scores = new int[numProjects]; // dynamic array
        cout << "Parameterized constructor called for " << name << endl;
    }

    // Function to input project scores
    void getScores() {
        cout << "Enter scores for " << name <<endl;
        for (int i = 0; i < numProjects; i++) {
            cout << "Project " << i + 1 << ": ";
            cin >> scores[i];
        }
    }

    // Function to calculate and return average
    double getAverage() {
        int sum = 0;
        for (int i = 0; i < numProjects; i++)
            sum += scores[i];
        return (double)sum / numProjects;
    }

    // Destructor
    ~Employee() {
        delete[] scores; // Free allocated memory
        cout << "Destructor called for " << name << endl;
    }
};

// Main function
int main() {
    string empName;
    int n;

    cout << "Enter employee name: ";
    cin >> empName;

    cout << "Enter number of projects: ";
    cin >> n;

    // Create Employee object with parameterized constructor
    Employee e1(empName, n);
    e1.getScores();

    cout << "\nAverage Score of " << empName << ": " << e1.getAverage() << endl;

    return 0;
}

