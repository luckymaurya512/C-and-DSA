#include<iostream>
using namespace std;
int main(){
    int key,i, flag=0;
    int arr[6];
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you are searching for: "<<endl;
    cin>>key;

    for(i=0;i<6;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Element not found";
    }
    else{
        cout<<"element is present at position: "<<i+1;
    }
}