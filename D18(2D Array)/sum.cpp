#include <iostream>
using namespace std;

void sum(int arr[][4], int row, int colm)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum  : " << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "  ";
        }

        cout << endl;
    }
    sum(arr, 3, 4);

    return 0;
}