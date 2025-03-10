#include <iostream>
using namespace std;

void printOddNumbers(int count) {
    int num = 1;
    for (int i = 0; i < count; i++) {
        cout << num << " ";
        num += 2;
    }
}

int main() {
    cout << "First 100 odd numbers:\n";
    printOddNumbers(100);
    return 0;
}
