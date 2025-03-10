#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
          return false;
    }
    return true;
}

int main() {
    int count = 0, num = 2;

    while (count < 50) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    return 0;
}
