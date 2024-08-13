#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row * col;
    int startRow = 0;
    int startCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        for (int i = startCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
        for (int i = startRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;
        for (int i = endingCol; count < total && i >= startCol; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int i = endingRow; count < total && i >= startRow; i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "  ";
        }

        cout << endl;
    }

    int row = arr.size();
    int col = arr[0].size();
    cout << "Spiral Print" << endl;
    vector<int> ans = spiralPrint(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}