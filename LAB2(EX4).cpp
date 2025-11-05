#include <iostream>
#include <string>
#include <cctype>  // for isalpha, isalnum

using namespace std;

bool isValidIdentifier(const string& input) {
    if (input.empty()) {
        return false; // empty string is not valid
    }

    // Check first character
    if (!(isalpha(input[0]) || input[0] == '_')) {
        return false;
    }

    // Check remaining characters
    for (size_t i = 1; i < input.length(); ++i) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string userInput;
    cout << "Enter input: ";
    cin >> userInput;

    if (isValidIdentifier(userInput)) {
        cout << "Valid identifier" << endl;
    } else {
        cout << "Not a valid identifier" << endl;
    }

    return 0;
}
