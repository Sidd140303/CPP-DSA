#include <iostream>
using namespace std;

bool checkequal(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool check(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int windowsize = s1.length();
    int count2[26] = {0};
    int i = 0;
    for (; i < windowsize; i++)
    {
        int index = s2[i] - 'a';
        count2[index]++;
    }

    if (checkequal(count1, count2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]++;

        i++;

        if (checkequal(count1, count2))
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    string s1 = "abc";
    string s2 = "eidbacooo";

    if (check(s1, s2))
        cout << "Anagram of " << s1 << " is present in " << s2 << endl;
    else
        cout << "Anagram of " << s1 << " is not present in " << s2 << endl;
    return 0;
}