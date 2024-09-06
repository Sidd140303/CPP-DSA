#include <iostream>
using namespace std;
void update(int &n)
{
    n++;
    // this is pass by reference and it
    // uses the same memory without creating another one
}
void update1(int *n)
{
    (*n)++;
}

int main()
{
    int i = 5;
    // create reference variable
    int &j = i;
    // cout << ++j << endl;
    // cout << i << endl;

    int n = 10;
    int *m = &n;
    cout << n << endl;
    update(n);
    cout << "after updation" << endl;
    cout << n << endl;
    update1(m);
    cout << "after updation" << endl;
    cout << n << endl;
    return 0;
}