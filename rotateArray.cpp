#include<iostream>
using namespace std;
int main(){
    int j=0,k;
    int arr[]={2,5,1,0,7,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ansArr[n];
    cout<<"enter the no. of rotations: ";
    cin>>k;
    k=k%n;
    for(int i=n-k;i<n;i++){
        ansArr[j]=arr[i];
        j++;
    }
    for(int i=0;i<=n-k;i++){
        ansArr[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<ansArr[i]<<" ";
    }
}