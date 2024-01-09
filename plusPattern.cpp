#include<iostream>
using namespace std;
int main(){
    int j,i,n;
    cout<<"enter the number of rows or columns";
    cin>>n;
    if(n%2==0){
        cout<<"Enter odd number";
    }
    else{
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j!=n/2 && i!=n/2){
                    cout<<"   ";
                }
                else{
                    cout<<" * ";
                }
            }
            cout<<"\n";
        }
    }
}