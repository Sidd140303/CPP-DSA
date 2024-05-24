#include <iostream>
using namespace std;

bool isposs(int arr[], int size, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }

        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m)
            {
                return false;
            }
            pagesum += arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int size, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s < e)
    {
        if (isposs(arr, size, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40}; // Example array of book pages
    int size = sizeof(arr) / sizeof(arr[0]);
    int m = 2; // Number of students

    int result = allocatebooks(arr, size, m);
    if (result != -1)
    {
        cout << "The minimum number of pages allocated to a student is: " << result << endl;
    }
    else
    {
        cout << "It is not possible to allocate books such that each student gets a book." << endl;
    }
    return 0;
}