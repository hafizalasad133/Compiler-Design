#include <iostream>
#include <string>
using namespace std;

int main() {
        string input;
    cout << "Enter a line: ";


    getline(cin, input);

    if (input.substr(0, 2) == "//") {
        cout << "This is a SINGLE LINE comment." << endl;
    }


    else if (input.substr(0, 2) == "/*" && input.size() >= 4 &&
             input.substr(input.size() - 2, 2) == "*/") {
        cout << "This is a MULTI LINE comment." << endl;
    }


    else {
        cout << "This is NOT a comment." << endl;
    }



    return 0;
}
