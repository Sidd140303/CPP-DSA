#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[size - 1 - i];
        // arr[size - 1 - i] = temp;
        swap(arr[i], arr[size - 1 - i]);
    }
}

int main()
{
    int arr[] = {34, 56, 32, 67, 10, 84, 15};
    int size = sizeof(arr) / sizeof(int);
    reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}