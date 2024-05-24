#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    //  m[Key]= "value";
    m[1] = "Joey";
    m[2] = "Chandler";
    m[3] = "Ross";
    m[4] = "Monica";

    m.insert({5, "Rachel"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(3);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " ";
    }

    return 0;
}