#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int A[10][10], B[10][10], result[10][10];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = A[i][j] + B[i][j];
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}
