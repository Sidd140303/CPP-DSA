#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return ans;
}

int findtotalocc(int arr[], int size, int key)
{

    int first = firstocc(arr, size, key);
    int last = lastocc(arr, size, key);

    return (last - first + 1);
}

int main()
{
    int arr[] = {0, 5, 5, 6, 6, 6};
    cout << firstocc(arr, 6, 6) << endl;
    cout << lastocc(arr, 6, 6) << endl;
    cout << "Total number of occurence : " << findtotalocc(arr, 6, 6);

    return 0;
}