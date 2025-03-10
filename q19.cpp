#include <iostream>
using namespace std;
int main(){
    int n,ar[100];
    cout<<"enter the length of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << i + 1 << ". Enter number: ";
        cin >> ar[i];   
    }
    int max=ar[0],min=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
    }
    cout<<"the Maximum element in array"<<max<<endl;
    cout<<"the minimum element in array"<<min;

}