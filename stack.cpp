#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("my name is khan");
    s.push("NO NO NO MY NAME IS AVINASH");
    s.push("my full name is avinash agrawal");
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << "IS Stack empty :- " << s.empty() << endl;
    return 0;
}