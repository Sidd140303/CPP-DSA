// Compliment of base 10 integer

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, temp;
    cout << "Enter a number :";
    cin >> n;
    temp = n;
    int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        int complimentbit = !bit;

        ans = (complimentbit * pow(10, i)) + ans;
        n = n >> 1;

        
    }
    // n = temp;
    // int digit, res = 0;
    // for (int i = 0; ans != 0; i++)
    // {
    //     digit = ans % 10;
    //     res = digit * pow(2, i) + res;
    //     ans /= 10;
    // }

    cout << ans;

    return 0;
}