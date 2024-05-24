#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout << "Finding elements : " << binary_search(v.begin(), v.end(), 3) << endl;
    cout << "upper bound : " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "lower bound : " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 5, b = 3;
    cout << "Max : " << max(a, b) << endl;
    cout << "Min : " << min(a, b) << endl;

    swap(a, b);

    string name = "Joey";
    reverse(name.begin(), name.end());
    cout << name << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}