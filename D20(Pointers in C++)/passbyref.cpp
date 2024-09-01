#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // *p = *p + 1;
    **p = **p + 1;

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before : " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    update(p2);
    cout << "After : " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}