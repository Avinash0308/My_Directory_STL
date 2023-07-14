#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> p;

    priority_queue<int, vector<int>, greater<int>> q;

    p.push(34);
    p.push(334);
    p.push(3);
    p.push(33);
    cout << p.size() << endl;
    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
    q.push(34);
    q.push(334);
    q.push(3);
    q.push(33);
    cout << q.size() << endl;
    int a = q.size();
    for (int i = 0; i < a; i++)
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    cout<<q.empty()<<" "<<p.empty()<<endl;
    return 0;
}