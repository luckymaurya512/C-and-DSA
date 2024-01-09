#include<iostream>
using namespace std;
int main(){
    // cout<<"Hello"<<endl<<"World !!";
    // cout<<"Hello"<<\n<<"World !!";
    int a, b;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
    return 0;
}