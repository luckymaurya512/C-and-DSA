#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10); // 10 is the size of the array.
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    
    v.resize(22);
    v.push_back(0);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(9);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.insert(v.begin()+2,8);
    v.insert(v.end()-3,10);

    v.erase(v.begin()+4);

    for(int i=0;i<sizeof(v)/sizeof(v[0]);i++){
        cout<<v[i]<<" ";
    }


    //to delete whole vector
    v.clear();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //After clearing the vector
    // for(int i=0;i<sizeof(v)/sizeof(v[0]);i++){
    // cout<<v[i]<<" ";
    // }


}
