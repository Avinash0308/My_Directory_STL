#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(4);
    v.shrink_to_fit();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    cout<<v.at(3)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"before"<<endl;
    for(int i = 0; i<v.size() ; i++){
        cout<<v[i]<<endl;
    }
    cout<<"after"<<endl;
    v.pop_back();
    for(int i = 0; i<v.size() ; i++){
        cout<<v[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<endl;
    v.clear();
    cout<<v.size()<<" "<<v.capacity()<<endl;

    vector<int> a(4,2);
    for(int i = 0; i< a.size() ; i++){
        cout<<a[i]<<endl;
    }

    vector<int> aa(a);
    for(int i  = 0; i<aa.size() ; i++){
        cout<<aa[i]<<endl;
    }
return 0;
}