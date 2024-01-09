
//Showing the sum of nth and (n+1)th term... whereas expected output is (n-1)th nd nth term

#include<iostream>
using namespace std;
int main(){
    int j=0;
    int sumArr[6];
    int arr[6];
    cout<<"Enter the elements of array: ";
    for (int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<"Original array is: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<6;i++){
        sumArr[j++]=arr[i-1]+arr[i];
    }
    cout<<"\nArray after performing running sum: ";
    for(int i=0;i<6;i++){
        cout<<sumArr[i]<<" ";
    }
}