#include <iostream>
using namespace std;

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "'" << ch << "' is a LOWERCASE letter." << endl;
    }
    else {
        cout << "'" << ch << "' is not an alphabetic character." << endl;
    }
}

int main() {
    char character;

    // Ask the user to input a character
    cout << "Enter a character: ";
    cin >> character;

    // Call the function to check the case
    checkCase(character);

    return 0;
}
