#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "Second" << endl;

    default:
        cout << "This is default case" << endl;
        break;
    }
    return 0;
}
// If we are in an infinite loop and inside there is a switch case so we will use exit() to get out of the loop.