#include<iostream>
using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"enter rows";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }
int main(){
    int i,j,n;
    cout<<"enter the rows nd columns";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}