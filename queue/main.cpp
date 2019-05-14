#include <iostream>
#include<queue>
using namespace std;

void showq(queue<int> q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(2);

    showq(q);

    q.pop();
    showq(q);

    q.push(5);
    showq(q);

    cout << endl << "Size of queue: " << q.size() << endl;
    cout << "q.front(): " << q.front() << endl;
    cout << "q.back(): " << q.back() << endl;

    return 0;
}
