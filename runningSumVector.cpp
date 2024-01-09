#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector<int> v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+ v[i];
    }
}
int main(){
    vector<int> v(6);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<6;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"Array before performing running sum: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    
    runningSum(v);

    cout<<"Array after performing running sum: ";
    for(int i=0; i<6;i++){
        cout<<v[i]<<" ";
    }
}
// hii
// frhdjdhgldgjgit status