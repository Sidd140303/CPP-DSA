// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> intersection(vector<int> arr1, int n1, vector<int> arr2, int n2)
// {
//     vector<int> ans;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = i; j < n2; j++)
//         {
//             if (arr1[i] < arr2[j])
//                 break;

//             if (arr1[i] == arr2[j])
//             {
//                 ans.push_back(arr1[i]);
//                 arr2[j] = INT32_MIN;
//                 break;
//             }
//         }
//     }
//     if (ans.empty())
//     {
//         ans.push_back(-1);
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 6};
//     vector<int> arr2 = {3, 4, 5, 6};
//     vector<int> result = intersection(arr1, 4, arr2, 4);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << ", ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> arr1, int n, vector<int> arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 6};
    vector<int> arr2 = {3, 4, 5, 6};
    vector<int> result = intersection(arr1, 4, arr2, 4);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }

    return 0;
}
