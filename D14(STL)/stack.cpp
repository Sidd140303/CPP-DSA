#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    s.push("Joey");
    s.push("Ross");
    s.push("Chandler");
    cout << "Top element : " << s.top() << endl;
    s.pop();
    cout << "Top element : " << s.top() << endl;
    cout << "Size : " << s.size() << endl;
    return 0;
}