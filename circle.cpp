#include<iostream>
using namespace std;
float area(int r){
    return 3.14*r*r;
}
float circumference(int r){
    return 2*3.14*r;
}
int main(){
    float r;
    cout<<"enter the radius of the circle: ";
    cin>>r;
    cout<<"\nArea of the Circle is : "<<area(r);
    cout<<"\nCircumference of the Circle is : "<<circumference(r)<<endl;
}