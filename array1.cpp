#include <iostream>
using namespace std;
int arr[5];
int main()
{
    cout<<"enter the elements of array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\nElements are : \n";
    //traversal using for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] <<endl;
    // }

    // traversal using for each loop
    // for(int element:arr){
    //     cout<<element;
    // }

    //traversal using while loop
    int j=0;
    while(j<5){
        cout<<arr[j];
        j++;
    }
}