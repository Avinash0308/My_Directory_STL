#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    cout<<d.max_size()<<endl;
    d.push_back(34);
    d.push_front(342);
    d.push_back(3);
    d.push_front(42);
    d.push_back(4);
    d.push_front(2);
    d.push_back(324);
    d.push_front(32);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    d.pop_back();
    d.pop_front();
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout<<endl<<d.front()<<" "<<d.back()<<endl;

    // cout << endl
    //      << d.size() <<" ";
    //      cout<<d.at(3)<<endl;
    //      d.clear();
    //      cout  << d.size() << endl;
    cout<<d.size()<<endl;
    d.erase(d.begin() , d.begin()+2);
    for(int i = 0; i<d.size() ; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    d.shrink_to_fit();
    cout<<d.size()<< " "<<d.max_size()<<endl;
    return 0;
}