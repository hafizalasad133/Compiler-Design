#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter something: ";
    cin >> input;

    bool isNumeric = true;


    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            break;
        }
    }


    if (isNumeric)
        cout << "This is a numeric constant." << endl;
    else
        cout << "This is NOT a numeric constant." << endl;

    return 0;
}

