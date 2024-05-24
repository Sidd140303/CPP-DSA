#include <iostream>
using namespace std;

int bubblesort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {7, 3, 8, 2, 9};
    bubblesort(arr, 5);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}