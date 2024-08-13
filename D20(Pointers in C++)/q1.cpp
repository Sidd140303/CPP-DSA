#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *p = &num;
    cout << num << endl;
    cout << *p << endl;
    (*p)++;
    cout << num << endl;
    int *q = p;
    (*q)++;
    cout << *q << endl;

    return 0;
}