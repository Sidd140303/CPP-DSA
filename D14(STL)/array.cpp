#include <iostream>
#include <array>
using namespace std;

int main()
{
    int arr[] = {3, 6, 7, 8, 9};    // Normal array
    array<int, 4> a = {1, 3, 5, 6}; // Using STL

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at index 2 :" << a.at(2) << endl; //.at function

    cout << "Emtpy or not :" << a.empty() << endl; //.empty will tell array is empty or not

    cout << "First element : " << a.front() << endl; // To access the first element
    cout << "Last element : " << a.back() << endl;   // To access the last element

    return 0;
}