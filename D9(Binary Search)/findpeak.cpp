#include <iostream>
using namespace std;

int findpeak(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[] = {3, 4, 5, 1};
    cout << "Peak element of the array is at index " << findpeak(arr, 4);
    return 0;
}