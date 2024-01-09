#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    cout<<"enter the number to count";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"total number of digit is :"<<count;
}