#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long A, B, N;
    cin >> A >> B >> N;
    cout << (N-1)/A + (N-1)/B - (N-1)/((A*B)/__gcd(A, B)) << endl;
}
