#include<iostream>
using namespace std;
int main(){
    int sum;
    cout<<"Enter the key;";
    cin>>sum;
    int arr[]={4,6,8,2,5,3,0};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
            if(arr[i]+arr[j]==sum){
                cout<<"The two numbers are "<<arr[i]<<" and "<<arr[j];
            }
        }
        cout<<endl;
    }
}