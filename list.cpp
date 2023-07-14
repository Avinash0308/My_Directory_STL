#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(4);
    l.push_back(3);
    l.push_back(6);
    l.push_back(5);
    l.push_front(2);
    l.push_front(1);
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin() );
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    list<int> n(l);
    for(int i : n){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> v(4,2343);
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}