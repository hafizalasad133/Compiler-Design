#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}

int main() {
    string input;
    cout << "Enter an expression (e.g., 2+3=5): ";
    getline(cin, input);

    vector<char> operators;

    for (char ch : input) {
        if (isOperator(ch)) {
            operators.push_back(ch);
        }
    }

    if (!operators.empty()) {
        for (size_t i = 0; i < operators.size(); ++i) {
            cout << "operator" << i + 1 << ": " << operators[i] << endl;
        }
    } else {
        cout << "No arithmetic operators found." << endl;
    }

    return 0;
}
