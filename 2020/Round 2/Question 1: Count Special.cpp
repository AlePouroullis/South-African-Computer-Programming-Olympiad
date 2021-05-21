#include <iostream>
#include <algorithm>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    long long A, B, N;
    cin >> A >> B >> N;
    cout << (N-1)/A + (N-1)/B - (N-1)/((A*B)/__gcd(A, B)) << endl;
}
