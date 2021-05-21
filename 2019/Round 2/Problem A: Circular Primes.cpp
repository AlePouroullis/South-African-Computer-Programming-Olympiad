#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<bool> primes(1000001, false);

void sieve(){
    for(int i = 0; i < 1000001; i++)
        primes[i] = true;

    primes[0] = primes[1] = 0;
    for(int i = 2; i*i < 1000001; i++){
        if(primes[i]){
            for(int j = i*i; j < 1000001; j+=i){
                primes[j] = 0;
            }
        }
    }

}

bool is_circular_prime(int a){
    string number = to_string(a);
    for(int i = 0; i < number.length(); i++){
        char temp = number.front();
        number.erase(0, 1);
        number += temp;
        if(!primes[stoi(number)])
            return false;
    }
    return true;
}

int main(){
    sieve();
    int n;
    cin >> n;

    int i = 2;
    int cnt = 0;

    while(cnt < n){
        if(is_circular_prime(i))
            cnt++;
        i++;
    }
    i--;
    cout << i << endl;
}
