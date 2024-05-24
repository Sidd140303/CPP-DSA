#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int count = 0;
    // for (int i = 1; i < 10; i++)
    // {
    //     cout << i << " ";
    //     count++;
    //     if (count == 3)
    //     {
    //         cout << endl;
    //         count = 0;
    //     }
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // int k = 1;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 4; i++)
    // {
    //     int k = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 3; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         char res = ch + j;
    //         cout << res << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // char ch = 'A';
    // for (int i = 0; i < 4; i++)
    // {
    //     int j = 0;
    //     while (j < i + 1)
    //     {
    //         char res = ch + j;
    //         cout << res << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4 - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 0; k < 4 - i; k++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}