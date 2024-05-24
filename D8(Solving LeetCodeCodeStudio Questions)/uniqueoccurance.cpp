#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    cout << ans;
    return 0;
}