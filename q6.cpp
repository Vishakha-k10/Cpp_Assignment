#include <iostream>
using namespace std;
int main(){
    int n;
    int pro=1;
    cout << "enter the number: 5";
    cin >> n;
    for (int i=1;i<=n;i++){
        pro=pro*i;
    }
    cout<<"factorial of "<<n<<" is "<<pro;
    return 0;
}