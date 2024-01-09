#include<iostream>
using namespace std;
int main(){
    int left=0, right=6;
    int arr[7];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    while(left<right){
        if(arr[left]==1 && arr[right]==0){
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1){
            right--;
        }
    }
    cout<<"\nArray after sorting: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}