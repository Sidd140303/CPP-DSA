#include <iostream>
using namespace std;

bool search(int arr[], int size)
{

    int key;
    cout << "Enter the element to search :";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {34, 56, 32, 67, 10, 84, 14};
    int size = sizeof(arr) / sizeof(int);
    bool found = search(arr, size);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is not present";
    }

    return 0;
}