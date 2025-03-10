#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            cout << "Not a palindrome." << endl;
            return 0;
        }
    }

    cout << "Palindrome." << endl;
    return 0;
}
