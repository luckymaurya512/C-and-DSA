#include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<square(i)<<endl;
    }
}