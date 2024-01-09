#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter the number of rows";
    cin>>n;
    cout<<"enter the number of columns";
    cin>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}