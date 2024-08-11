#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &ch)
{
    int i = 0;
    int ansindx = 0;
    int n = ch.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && ch[i] == ch[j])
        {
            j++;
        }

        ch[ansindx++] = ch[i];

        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char c : ch)
            {
                ch[ansindx++] = c;
            }
        }
        i = j;
    }
    return ansindx;
}
int main()
{

    return 0;
}