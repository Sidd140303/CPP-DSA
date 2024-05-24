#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    int s1 = 0, s2 = 0;
    while (s1 < arr1.size() && s2 < arr2.size())
    {
        if (arr1[s1] < arr2[s2])
        {
            ans.push_back(arr1[s1]);
            s1++;
        }
        else
        {
            ans.push_back(arr2[s2]);
            s2++;
        }
    }

    while (s1 < arr1.size())
    {
        ans.push_back(arr1[s1]);
        s1++;
    }
    while (s2 < arr2.size())
    {
        ans.push_back(arr2[s2]);
        s2++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6};
    vector<int> ans = merge(arr1, arr2);

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}