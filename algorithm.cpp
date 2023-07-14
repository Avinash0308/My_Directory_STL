#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(334);
    v.push_back(355);
    v.push_back(3455);
    cout << binary_search(v.begin(), v.end(), 3) << endl;
    cout << lower_bound(v.begin(), v.end(), 3455) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 3455) - v.begin() << endl;
    int x = 345, h = 344;
    cout << max(x, h) << endl;
    cout << min(x, h) << endl;
    float a = 234.223, b = 234.222;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string me = " asdf";
    reverse(me.begin() , me.end());
    cout<<me<<endl;
    rotate(v.begin() , v.begin() + 3 , v.end());
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin() , v.end());
    for(auto i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    return 0;
}