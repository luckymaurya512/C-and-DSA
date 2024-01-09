#include<iostream>
using namespace std;
// // int sum(int num1,int num2){
// //     return num1+num2;
// // }
// int sum(int num1, int num2, int num3){
//     return num1 + num2 + num3;
// }
float sum(float num1, float num2){
    return num1 + num2;
}
int main(){
    cout<<"Enter two numbers: ";
    float a, b;
    cin>>a>>b;
    cout<<"\nThe sum of "<<a<<" and "<<b<<" is : "<<sum(a,b);
}