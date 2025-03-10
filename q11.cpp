#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, temp, count = 0, rem;
    double sum = 0;  

    cout << "Enter a number" << endl;
    cin >> n;
    temp = n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    n = temp;

    while (n != 0)
    {
        rem = n % 10;
        sum += pow(rem, count);  
        n /= 10;
    }

    if (round(sum) == temp)  
    {
        cout << temp << " is an Armstrong Number..." << endl;
    }
    else
    {
        cout << temp << " is not an Armstrong Number..." << endl;
    }

    return 0;
}
