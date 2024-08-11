#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int key, int row, int colm)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (key == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
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
    int n;
    cout << "Enter the element to search : ";
    cin >> n;
    cout << ((ispresent(arr, n, 3, 4)) ? "ELement found" : "Not found");

    return 0;
}