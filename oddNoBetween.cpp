#include<iostream>
using namespace std;
void odd(int start, int end){
    for(int i=start; i<=end; i++){
        if(i%2!=0){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int s, e;
    cout<<"enter the starting number";
    cin>>s;
    cout<<"enter the end number";
    cin>>e;
    odd(s,e);
}