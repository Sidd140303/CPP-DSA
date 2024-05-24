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

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Sqrt of " << num << " is " << sqrt(num);
    return 0;
}