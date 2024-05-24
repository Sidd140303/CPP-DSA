#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout << "Enter an amount :";
    cin >> amt;
    int opt;
    cout << "Enter the option :";
    cout << "\n1. 100\n2. 50\n3. 20\n4. 1\n ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        cout << "You will need " << (amt / 100) << " number of 100's notes";
        break;
    case 2:
        cout << "You will need " << amt / 50 << " number of 50's notes";
        break;
    case 3:
        cout << "You will need " << amt / 20 << " number of 20's notes";
        break;
    case 4:
        cout << "You will need " << amt / 1 << " number of 1's notes";
        break;

    default:
        break;
    }
    return 0;
}