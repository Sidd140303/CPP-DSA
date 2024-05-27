#include <iostream>
using namespace std;

string reverse(string s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
    return s;
}

int main()
{

    string s = "Siddharth gupta";
    string temp = "";
    string result = "";
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            result += reverse(temp) + (i == s.length() ? "" : " ");
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    cout << "Result : " << result;
    return 0;
}