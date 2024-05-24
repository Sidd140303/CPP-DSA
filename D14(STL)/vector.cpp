#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector is a dynamic array
    vector<int> v;
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(5); //.push_back() is a function used to insert an element
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(6);
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(7);
    cout << "Capacity : " << v.capacity() << endl; //.capacity() tells how much is the capacity
    cout << "Size : " << v.size() << endl;         //.size() tells how many elements are there
    cout << "First element : " << v.front() << endl;
    cout << "Last element : " << v.back() << endl;
    v.pop_back(); // This is used to pop the elements at last from array
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.clear(); // This is used to empty the array
    cout << "Size : " << v.size() << endl;

    // Another way of initializing
    vector<int> arr(5, 1); // 5 is the size and 1 is initialized to all the index
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // This is used to copy from the array which is already created
    vector<int> arr1(arr);
    for (int x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}