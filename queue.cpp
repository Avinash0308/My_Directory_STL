#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Avi");
    q.push("MY Name is Avinash Agrawal");
    q.push("YES it is absolutely right btw my name in my home is avinash agrawal definietly not it is tulsi");
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    return 0;
}