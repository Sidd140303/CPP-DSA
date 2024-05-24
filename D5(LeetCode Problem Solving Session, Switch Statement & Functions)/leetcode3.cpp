// Integer is power of 2

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, temp;
    cout << "Enter a number :";
    cin >> n;
    int ans = 1;
    for (int i = 0; i < 30; i++)
    {
        if (ans == n)
        {
            cout << n << " is power of 2";
            return 1;
        }
        ans = ans * 2;
    }
    cout << n << " is not power of 2";
    return 0;
}


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n <= 0) return false;
//         return (n & (n - 1)) == 0;
//     }
// };
