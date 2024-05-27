#include <iostream>
using namespace std;

char getmaxoccurchar(string s)
{
    int arr[26] = {0};
    // char max = s[-1];
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int n;
        if (ch >= 'a' && ch <= 'z')
        {
            n = ch - 'a';
        }
        else
        {
            n = ch - 'A';
        }
        arr[n]++;
    }
    int maxi = -1, ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{
    string s;
    cout << "Enter :";
    getline(cin, s);
    cout << "Result : " << getmaxoccurchar(s);

    return 0;
}