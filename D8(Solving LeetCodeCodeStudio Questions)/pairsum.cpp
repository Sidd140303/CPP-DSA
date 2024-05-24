#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> pairsum(vector<int> arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    std::sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> result = pairsum(arr, 10);
    for (vector<int> &pair : result)
    {
        cout << pair[0] << ", " << pair[1] << endl;
    }

    return 0;
}