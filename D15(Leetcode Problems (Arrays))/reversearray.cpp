#include <iostream>
#include <vector>
using namespace std;
void reversearray(vector<int> &arr, int m)
{
    int s = m;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reversearray(arr, 2);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}