#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &arr)
{

    int count = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    return count <= 1;
}

int main()
{
    vector<int> arr1 = {3, 4, 5, 1, 2};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> arr3 = {8, 3, 9, 5, 6};
    bool result1 = check(arr1);
    bool result2 = check(arr2);
    bool result3 = check(arr3);
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    return 0;
}