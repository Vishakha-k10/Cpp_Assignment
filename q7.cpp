#include <iostream>
using namespace std;
int main(){
    int n,temp;
    
    cout<<"enter the number ";
    cin >> n;
    temp=n;
    int sum=0,count=0;
    while(temp>0){
        temp=temp/10;
        count++;
        
    }
    for(int i=1;i<=count;i++){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    cout<<"\n sum of digits of the number "<<sum;
    return 0;
}