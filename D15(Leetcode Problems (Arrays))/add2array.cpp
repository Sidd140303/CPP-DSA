#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int arr2int(vector<int> arr)
{
    int sum = 0;
    int i = 0;
    int p = pow(10, arr.size());
    while (i < arr.size())
    {
        sum = (arr[i] * p) + sum;
        p = p / 10;
        i++;
    }
    sum = sum / 10;
    return sum;
}

vector<int> add(vector<int> arr1, vector<int> arr2)
{
    int res1 = arr2int(arr1);
    int res2 = arr2int(arr2);
    int ans = res1 + res2;
    vector<int> arr3;
    while (ans != 0)
    {
        int temp = ans % 10;
        ans = ans / 10;
        arr3.push_back(temp);
    }
    return arr3;
}
void reversearray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

// Alternative solution
// vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
// {

//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;
//     int carry = 0;

//     while (i >= 0 && j >= 0)
//     {
//         int val1 = a[i];
//         int val2 = b[j];

//         int sum = val1 + val2 + carry;

//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }

//     // first case
//     while (i >= 0)
//     {
//         int sum = a[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }

//     // second case
//     while (j >= 0)
//     {
//         int sum = b[j] + carry;
//         carry = sum / 10;
//         int value = sum % 10;
//         ans.push_back(value);
//         j--;
//     }

//     // second case
//     while (carry != 0)
//     {
//         int sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }

//     // print(ans);
//     return reverse(ans);
// }

int main()
{
    vector<int> arr1 = {3};
    vector<int> arr2 = {2, 4, 6};
    vector<int> res = add(arr1, arr2);
    reversearray(res);
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl; // Expected output: 2 4 9

    // Test Case 2: Addition with carry
    vector<int> arr3 = {9, 9, 9};
    vector<int> arr4 = {1};
    vector<int> res2 = add(arr3, arr4);
    reversearray(res2);
    for (int i : res2)
    {
        cout << i << " ";
    }
    cout << endl; // Expected output: 1 0 0 0

    // Test Case 3: Addition of numbers with different lengths
    vector<int> arr5 = {1, 0, 0, 0};
    vector<int> arr6 = {9, 9, 9};
    vector<int> res3 = add(arr5, arr6);
    reversearray(res3);
    for (int i : res3)
    {
        cout << i << " ";
    }
    cout << endl; // Expected output: 1 9 9 9

    // Test Case 4: Addition resulting in leading zeros
    vector<int> arr7 = {0, 0, 1};
    vector<int> arr8 = {0, 0, 9};
    vector<int> res4 = add(arr7, arr8);
    reversearray(res4);
    for (int i : res4)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}