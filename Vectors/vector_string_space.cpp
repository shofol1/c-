#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,v[i]);
    }
    for(string val:v){
       cout<<val<<endl;
    }

    
    return 0;
}
