#include<iostream>
using namespace std;
int main(){
    int sum=0,rem,n, power=1;
    cout<<"Enter a binary number: ";
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=sum + rem*power;
        power=power*2;
        n=n/10;
    }
    cout<<sum;
}