#include<iostream>
#include<vector>
using namespace std;
int main(){
    int element;
    vector <int> v;
    cout<<"enter the elements of vector: ";
    for(int i=0;i<6;i++){
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }
}