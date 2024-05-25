#include <iostream>
#include <vector>
using namespace std;

void rotatearray(vector<int> &arr, int m)
{

    int s = arr.size();
    vector<int> temp(s);
    for (int i = 0; i < s; i++)
    {
        temp[(i + m) % s] = arr[i];
    }
    arr = temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    rotatearray(arr, 2);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}