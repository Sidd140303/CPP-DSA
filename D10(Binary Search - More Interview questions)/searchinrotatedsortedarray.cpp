#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarysearch(int arr[], int start, int end, int key)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findelem(int arr[], int size, int key)
{
    int pivot = getpivot(arr, size);
    if (key >= arr[pivot] && key < arr[size - 1])
    {

        return binarysearch(arr, pivot, size - 1, key);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, key);
    }
}

int main()
{

    int arr[] = {7, 9, 1, 2, 3};
    cout << "Element is at index " << findelem(arr, 5, 9) << endl;
    return 0;
}