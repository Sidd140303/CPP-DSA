#include <iostream>
using namespace std;

string removeduplicate(string s)
{
    bool removed = true;
    int n = s.length();
    while (removed)
    {
        removed = false;
        int i = 0;
        while (i < n - 1)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                removed = true;
            }
            else
            {
                ++i;
            }
        }
    }
    return s;
}

int main()
{
    string s = "bazzay";
    cout << "Result : " << removeduplicate(s);
    return 0;
}