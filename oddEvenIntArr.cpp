#include<iostream>
using namespace std;
int main(){
    int j=0,countEven=0;
    int start=0;
    int arr[8];
    int oddEvenArr[8];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    cout<<"Given array is: ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<8;i++){
        if(arr[i]%2==0){
            oddEvenArr[j++]=arr[i];
            countEven++;
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]%2==1){
            oddEvenArr[j++]=arr[i];
        } 
    }
    cout<<"\nEven odd array is: ";
    for(j=0;j<8;j++){
        cout<<oddEvenArr[j]<<" ";
    }
}