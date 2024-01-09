#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int start, end, i;
    cout << "Enter the starting number: ";
    cin>>start;
    cout<<"enter the end number: ";
    cin>>end;
    for(i=start;i<=end;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}