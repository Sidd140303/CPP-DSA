#include <iostream>
using namespace std;

int fact(int n)
{
    int val = 1;
    for (int i = 1; i < n; i++)
    {
        val = val * i;
    }
    return val;
}
int nCr(int n, int r)
{
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    return num / denom;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r :\n";
    cin >> n >> r;
    cout << "Answer is " << nCr(n, r) << endl;
    return 0;
}