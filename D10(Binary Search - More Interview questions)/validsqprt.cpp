#include <iostream>
#include <math.h>
using namespace std;

int sqrt(int num)
{
    int s = 0;
    int e = num - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (pow(mid, 2) == num)
        {
            return mid;
        }
        else if (pow(mid, 2) > num)
        {
            e = mid - 1;
        }
        else if (pow(mid, 2) < num)
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double validsqrt(int num, int prec)
{
    double ans = sqrt(num);
    double factor = 1;
    for (int i = 0; i < prec; i++)
    {
        factor = factor / 10;
        int sq = ans * ans;
        for (double j = ans; j * j < num; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Sqrt of " << num << " is " << validsqrt(num, 3);
    return 0;
}