#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || j==n ||i==n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}