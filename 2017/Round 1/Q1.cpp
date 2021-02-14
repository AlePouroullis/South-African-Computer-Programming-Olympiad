// 2017 Round 1
// Question 1

#include <iostream>

using namespace std;

int main(){
    double P, r, t;
    cin >> P >> r >> t;
    double A;
    A = P + (P * r / 100 * t);
    cout << fixed << setprecision(2) << A;
}
