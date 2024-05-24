// Subtract the product and sum of the digits of the integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp = n;
    int pro = 1, sum = 0;
    while (n != 0)
    {
        pro = pro * (n % 10);
        sum = sum + (n % 10);
        n /= 10;
    }

    int res = pro - sum;
    cout << "Difference between Product and Sum is: " << res;

    return 0;
}