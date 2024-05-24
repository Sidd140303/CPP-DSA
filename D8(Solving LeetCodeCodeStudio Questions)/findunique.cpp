#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 6};
    int size = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < size; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         cout << arr[i]<< " ";
    //     }
    // }

    // optimized solution
    cout << findunique(arr, size);

    return 0;
}