#include <iostream>
using namespace std;

int main()
{
    int arr[] = {36, 78, 25, 63, 27, 9};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}