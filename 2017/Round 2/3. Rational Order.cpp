// Solution by Alexandros Pouroullis
/*
A bit sketchy, because it stores the rational numbers as floats in a set,
and comparison of decimal numbers sometimes doesn't work as intended.
*/
#include <iostream>
#include <set>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    int n;
    cin >> n;
    set<float> ans;
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i > j)
                continue;
            ans.insert((float)i/j);
        }
    }
    cout << ans.size();
}
