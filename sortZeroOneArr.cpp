#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int zeroCount = 0;
    int arr[8], sortedArr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i];
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (i < zeroCount)
        {
            sortedArr[i] = 0;
        }
        else
        {
            sortedArr[i] = 1;
        }
    }
    cout << "\nArray after sorting: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << sortedArr[i];
    }
}