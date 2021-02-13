// 2018 Round 1
// Question 3

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> proper_divisors;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            proper_divisors.pb(i);

            if(n / i != i && n / i != n)
                proper_divisors.pb(n / i);
        }
    }
    int sum_of_divisors = 0;
    for(int &x : proper_divisors)
        sum_of_divisors += x;

    if(sum_of_divisors > n)
        cout << "Abundant";
    else if(sum_of_divisors == n)
        cout << "Perfect";
    else
        cout << "Deficient";
}
