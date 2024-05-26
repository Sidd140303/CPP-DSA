#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char name[])
{
    int len = strlen(name);
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        char startChar = tolowercase(name[s]);
        char endChar = tolowercase(name[e]);
        if (startChar < 'a' || startChar > 'z')
        {
            s++;
        }
        else if (endChar < 'a' || endChar > 'z')
        {
            e--;
        }
        else
        {
            if (startChar != endChar)
            {
                return false;
            }
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char name[10];
    cout << "Enter a name :";
    cin >> name;
    cout << "Result : " << (palindrome(name) ? "Yes" : "No");
    return 0;
}