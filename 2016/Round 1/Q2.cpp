// 2016 Round 1
// Question 2

#include <iostream>

using namespace std;

int main(){
    ll N;
    cin >> N;
    ll sum_of_factors = 0;

    for(ll i = 1; i*i <= N; i++){
        if(N % i == 0){
            sum_of_factors += i;
            if(N / i != N && N / i != i)
                sum_of_factors += N / i;
        }
    }
    cout << sum_of_factors;

}
