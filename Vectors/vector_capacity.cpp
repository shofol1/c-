#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(20);
    // cout<<v.capacity()<<endl;
    v.push_back(30);
    // cout<<v.capacity()<<endl;
    v.push_back(40);
    // cout<<v.capacity()<<endl;
    v.push_back(50);
    // v.clear();
    // cout<<v.size()<<endl;
     v.resize(9,100);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //   cout<<v[0]<<endl;
    return 0;
}
