#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        if (element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    };
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    search(arr, 5);
    return 0;
}