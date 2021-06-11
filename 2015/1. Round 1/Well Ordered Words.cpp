// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string check = s;
    sort(check.begin(), check.end());
    if(s != check)
        cout << "False" << endl;
    else
        cout << "True" << endl;
}
