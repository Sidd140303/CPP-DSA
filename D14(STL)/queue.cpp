#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> s;
    s.push("Joey");
    s.push("Ross");
    s.push("Chandler");
    cout << "Front element : " << s.front() << endl;
    s.pop();
    cout << "Back element : " << s.back() << endl;
    cout << "Size : " << s.size() << endl;
    return 0;
}