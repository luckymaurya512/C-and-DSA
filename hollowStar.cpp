#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter the no. of rows";
    cin>>n;
    cout<<"enter the no. columns";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || j==1 || i==n || j==m){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}