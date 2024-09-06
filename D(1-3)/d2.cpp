// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number :\n";
//     cin >> n;
//     if (n > 0)
//     {
//         cout << "Positive";
//     }
//     else
//     {
//         cout << "Negative";
//     }

//     return 0;
// }

// Check If number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int i = 1;
    int count = 0;
    while (i < num)
    {

        if (num % i == 0)
        {
            count++;
        }
        if (count > 1)
        {
            cout << "Not Prime";
            return 0;
        }
        i++;
    }
    cout << "Prime";

    return 0;
}