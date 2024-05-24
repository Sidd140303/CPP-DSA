#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1; 
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {10, 6, 3, 8, 5};
    sort(arr, 5);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}