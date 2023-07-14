#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[2] = "me";
    m[32] = "you";
    m[3] = "love";
    m.insert({34, "bhag"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << m.count(43) << endl;
    m.erase(34);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    map<int, string>::iterator it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}