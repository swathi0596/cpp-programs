#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(3);

    showStack(s);
    cout << endl << "Size = " << s.size() << endl;
    cout << "Top = " << s.top() << endl;

    s.pop();
    cout << endl << "After popping: " << endl;
    showStack(s);


    return 0;
}
