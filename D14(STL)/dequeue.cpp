#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);  // Used to push from back
    d.push_front(2); // Used to push from front
    d.push_back(3);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back(); // Used to pop from back
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front(); // Used to pop from front
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.push_front(5);
    d.push_front(6);
    d.push_front(7);
    d.push_front(8);
    d.push_front(9);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.erase(d.begin(), d.begin() + 2); // Use to remove elements from a particular range
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}