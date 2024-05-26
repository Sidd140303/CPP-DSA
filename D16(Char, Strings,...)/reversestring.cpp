#include <iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[])
{
    int size = getlength(name);
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int main()
{
    char name[10];
    cout << "Enter a name :";
    cin >> name;
    reverse(name);
    cout << "Length : " << name;
    return 0;
}