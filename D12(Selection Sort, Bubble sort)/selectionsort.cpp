#include <iostream>
#include <utility>
using namespace std;

int selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}
int main()
{
    int arr[] = {7, 3, 8, 2, 9};

    selectionsort(arr, 5);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}