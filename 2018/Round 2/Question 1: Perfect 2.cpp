// Solution by Alexandros Pouroullis
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

int D(int n){
    set<int> pd;
    for(int i = 1; i*i < n; i++){
        if(n % i == 0){
            pd.insert(i);
            if(n/i != n)
                pd.insert(n/i);
        }
    }
    int d = 0;
    for(auto divisor : pd){
        d += divisor;
    }
    return d;
}

int main(){
    int a, b;
    cin >> a >> b;
    int deficient = 0, perfect = 0, abundant = 0;
    for(int i = a; i <= b; i++){
        int sum_divisors = D(i);
        if(sum_divisors < i)
            deficient++;
        else if(sum_divisors == i)
            perfect++;
        else
            abundant++;
    }
    cout << deficient << " " << perfect << " " << abundant << endl;
}
