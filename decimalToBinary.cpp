#include<iostream>
using namespace std;
int main(){
    int n,sum=0,power=1,rem;
    cout<<"Enter a decimal number to convert: ";
    cin>>n;
    while(n>0){
        rem = n%2;
        sum = sum + power*rem;
        power = power * 10;
        n = n / 2;
    }
    cout<<sum;
}