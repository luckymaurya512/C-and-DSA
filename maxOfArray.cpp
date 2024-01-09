#include<iostream>
using namespace std;
int main(){
    int arr[]={5,12,0,54,77,41};
    int max=arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}