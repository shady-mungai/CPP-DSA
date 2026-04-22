#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double values[SIZE];
    double sum = 0;

    cout << "Enter 5 values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> values[i];
        sum += values[i];  
    }

    // Calculate the average
    double average = sum / SIZE;

    cout << "Average of the 5 values = " << average << endl;

    return 0;
}
