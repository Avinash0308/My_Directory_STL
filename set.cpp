#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(53);
    s.insert(53);
    s.insert(53);
    s.insert(55);
    s.insert(12);
    for (int i : s)
    {
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << endl;
    for (int i : s)
    {
        cout << i << endl;
    }
    cout<<"Let's chech whether a number is present in the set or not \n";
    cout<<s.count(5)<<endl;

    set<int> :: iterator iter = s.find(5);
    cout<<*(++iter)<<endl;
    return 0;
}