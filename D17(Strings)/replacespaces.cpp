#include <iostream>
using namespace std;

string replacespaces(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            temp.push_back(s[i]);
        }
        else
        {
            temp.append("@40");
        }
    }
    return temp;
}

int main()
{
    string s;
    cout << "Enter :";
    getline(cin, s);
    cout << "Result : " << replacespaces(s);
   

    return 0;
}