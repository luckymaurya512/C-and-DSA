#include<iostream>
using namespace std;
int main(){
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    int arr[]={2,4,6,8,0,1,5,3};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
            for(int k=j+1;k<sizeof(arr)/sizeof(arr[0]);k++){
                if (arr[i]+arr[j]+arr[k]==sum){
                    cout << "The three numbers are : " << arr[i] << ", " << arr[j] << " and " << arr[k];
                }
            }
        }
        cout<<endl;
    }
}