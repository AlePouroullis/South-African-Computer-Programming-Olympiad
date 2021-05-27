// Solution by Alexandros Pouroullis
#include <iostream>
#include <vector>

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
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> d;
    for(int i = 1; i < n; i++){
        d.push_back(a[i] - a[i-1]);
        vector<int> b(n);
        b[0] = a[0];
        for(int i = 0; i < n-1; i++){
            b[i+1] = b[i] + d[i%d.size()];
        }
        if(b == a){
            for(int x : d)
                cout << x <<  " ";
            break;
        }
    }
}
