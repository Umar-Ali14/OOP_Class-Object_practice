#include <iostream>
#include <cstdlib>
using namespace std;

class decimalList {
private:
    double *array;
    int size;

    bool isValid(int index) {
        return (index >= 0 && index < size);
    }

public:
    decimalList(int sz) {
        size = sz;
        array = new double[sz]; 
    }

    ~decimalList() {
        delete[] array;
    }

    void AddElement(int index, double val) {
        if (isValid(index))
            array[index] = val;
        else {
            cout << "Invalid index!" << endl;
            exit(-1);
        }
    }

    double getHighest() {
        double highest = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > highest)
                highest = array[i];
        }
        return highest;
    }

    double getLowest() {
        double lowest = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < lowest)
                lowest = array[i];
        }
        return lowest;
    }

    double getAverage() {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum / size;
    }
};

int main() {
    int n;
    cout << "Enter size of decimal list: ";
    cin >> n;

    decimalList list(n);

    for (int i = 0; i < n; i++) {
        double val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        list.AddElement(i, val);
    }

    cout << "\nHighest Element: " << list.getHighest() << endl;
    cout << "Lowest Element: " << list.getLowest() << endl;
    cout << "Average Value: " << list.getAverage() << endl;

    return 0;
}

