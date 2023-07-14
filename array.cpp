#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 4> a= {34, 2, 53,2};
    int size = a.size();
    for(int i = 0 ; i< size ; i++){
        cout<<a[i]<<endl;
    }
    cout<<a.at(3)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
}