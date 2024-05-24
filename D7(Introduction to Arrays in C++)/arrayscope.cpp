#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    arr[0] = 14;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\nAfter updating :\n";
    update(arr, 3); 
    //Here array's copy is not passed, instead it's address is passed, as the key term here arr contains the base
    // address of the array

    return 0;
}