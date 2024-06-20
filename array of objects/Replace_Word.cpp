#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); 
    for (int i = 0; i < T; i++) {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);
        int indx = S.find(X); 
        while (indx != string::npos) {
           
            S.replace(indx, X.size(), "#");
            indx = S.find(X, indx + 1);
        }
        cout << S << endl;
    }

    return 0;
}
