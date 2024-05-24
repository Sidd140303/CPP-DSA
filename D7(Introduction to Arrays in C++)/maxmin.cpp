#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 56, 32, 67, 10, 84, 14};
    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
        // else if (arr[i] < mini)
        // {
        //     mini = arr[i];
        // }
    }

    cout << "Max in the array is " << maxi << endl;
    cout << "Min in the array is " << mini << endl;

    return 0;
}