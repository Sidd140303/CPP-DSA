#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(8);
    s.insert(4);
    s.insert(9);
    s.insert(4); // Stores only unqiue elements
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Time Complexity : O(Log(n))
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element is present or not : " << s.count(4) << endl;

    set<int>::iterator itr = s.find(4);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}