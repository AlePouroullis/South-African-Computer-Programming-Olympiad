// 2017 Round 1
// Question 2

#include <iostream>

using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int tribonacci[n];
    tribonacci[0] = a;
    tribonacci[1] = b;
    tribonacci[2] = c;

    for(int i = 3; i < n; i++){
        tribonacci[i] = tribonacci[i - 3] + tribonacci[i - 2] + tribonacci[i - 1];
    }
    cout << tribonacci[n - 1];
}
