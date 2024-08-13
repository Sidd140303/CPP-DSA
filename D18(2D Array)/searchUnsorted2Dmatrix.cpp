#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int rowIdx = 0;
    int colIdx = col - 1;
    while (rowIdx < row && colIdx >= 0)
    {
        int element = arr[rowIdx][colIdx];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIdx++;
        }
        else
        {
            colIdx--;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr;
    return 0;
}