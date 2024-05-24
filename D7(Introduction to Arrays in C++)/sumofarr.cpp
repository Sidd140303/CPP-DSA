#include <iostream>
using namespace std;

int sumofarr(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    int arr[100];
    cout << "Enter the size :";
    cin >> size;

    cout << "Enter the elements :\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array is " << sumofarr(arr, size);

    return 0;
}