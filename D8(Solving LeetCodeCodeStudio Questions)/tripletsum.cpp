#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> tripletsum(vector<int> arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    std::sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> result = tripletsum(arr, 10);
    for (vector<int> &pair : result)
    {
        cout << pair[0] << ", " << pair[1] << ", " << pair[2] << endl;
    }

    return 0;
}