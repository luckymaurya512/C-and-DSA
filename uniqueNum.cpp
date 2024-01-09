#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,7,5,3,5,7};
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]);j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>0){
            cout<<arr[i]<<"  ";
        }
    }
}