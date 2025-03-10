#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Four-digit Armstrong numbers are:\n";

    for (int num = 1000; num <= 9999; num++) {
        int originalNum = num;
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, 4); // Raising to power 4
            temp /= 10;
        }

        if (sum == originalNum) {
            cout << num << " ";
        }
    }

    return 0;
}
