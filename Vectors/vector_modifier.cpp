#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,20,20};
    vector<int>v2={1,2,3,6};
    // v.assign(v2.begin(),v2.end());
    // v=v2;
    // cout<<v.size()<<endl;
    // v.push_back(50);
    // v.pop_back();
    // v.insert(v.begin()+1,v2.begin(),v2.end());
    // v.erase(v.begin()+1,v.end()-1);
    // replace(v.begin(),v.end(),20,0);
    // vector<int>::iterator it;
    auto it=find(v.begin(),v.end(),200);
    // cout<<*it;
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}
