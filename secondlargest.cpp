#include<iostream>
using namespace std;
int main(){
    int maxIndex=-1;
    int arr[]={2,5,4,15,10,6,7,9};
    int max=0, secondMax=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(max < arr[i]){
            max = arr[i];
            maxIndex=i;
        }
    }
    arr[maxIndex]=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(secondMax<arr[i]){
            secondMax=arr[i];
        }
    }
    cout<<"Second max element is: "<<secondMax;
}