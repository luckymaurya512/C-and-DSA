#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the height of the pyramid";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"   ";
        }
        for(j=0;j<(2*i-1);j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}