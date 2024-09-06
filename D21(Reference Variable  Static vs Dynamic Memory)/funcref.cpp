#include <iostream>
using namespace std;

void update(int n)
{
    int num = n;
    int &ans = num;
}

int main()
{
    int i = 5;
    update(i);
    cout << i << endl;
    cout << "Before Updation" << endl;
    cout << i << endl;
    return 0;
}