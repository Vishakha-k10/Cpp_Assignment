#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int main() {
    cout << "Palindromes between 500 and 1000:\n";
    
    for (int i = 500; i <= 1000; i++) {
        if (isPalindrome(i))
            cout << i << " ";
    }

    return 0;
}
