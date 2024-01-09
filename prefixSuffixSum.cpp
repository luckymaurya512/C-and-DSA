#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector <int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum=v[i];
        total_sum++;
    }
    int prefixSum=0;
    for(int i=0;i<v.size();i++){
        prefixSum+=v[i];
        int suffixSum= total_sum - prefixSum; 
        if(prefixSum==suffixSum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of the vector: ";
    for (int i =0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkPrefixSuffixSum(v)<<endl;
}