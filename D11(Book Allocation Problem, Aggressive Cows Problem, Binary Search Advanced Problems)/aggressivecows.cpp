#include <iostream>
#include <utility>
using namespace std;

bool isposs(int arr[], int size, int k, int mid)
{
    int cowcount = 1;
    int lastpos = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }

            lastpos = arr[i];
        }
    }
    return false;
}

int aggressivecows(int arr[], int size, int k)
{
    int x = arr[0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    int s = 0;
    int maxi = -1;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (isposs(arr, size, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 7, 4, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of cows

    int result = aggressivecows(arr, size, k);

    cout << "The largest minimum distance is: " << result << endl;
    return 0;
}