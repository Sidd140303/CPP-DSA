#include <iostream>
#include <vector>
using namespace std;

void movezeros(vector<int> &arr)
{
    int x = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[x]);
            x++;
        }
    }
}

int main()
{
    vector<int> arr = {2, 0, 0, 6, 8, 0};
    movezeros(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}