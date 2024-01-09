#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[]={1,7,3,9,5,4};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}