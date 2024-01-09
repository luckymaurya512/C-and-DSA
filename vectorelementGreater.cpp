#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, count=0;
    vector <int> v;
    cout<<"enter the elements of array: ";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter the key: ";
    cin>>n;
    for(int i=0;i<6;i++){
        if(v[i]>n){
            count++;
        }
    }
    cout<<count;
}