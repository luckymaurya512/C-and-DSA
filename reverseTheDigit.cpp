#include<iostream>
using namespace std;
int main(){
    int n,temp,rev=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
        temp=n%10;
        rev = rev*10 + temp;
        n=n/10;
    }
    cout<<rev;
}