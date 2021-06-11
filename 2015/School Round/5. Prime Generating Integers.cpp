#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num){
    if(num < 2) return false;
    if(num == 2 || num == 3) return true;
    if(!(num % 6 == 1 || num % 6 == 5)) return false;
    for(int i = 2; i*i <= num; i++)
        if(num % i == 0)
            return false;
    return true;
}

int main(){
    int n;
    cin >> n;

    int ans = 3;
    for(int i = 4; i <= n; i+=2){
        if(!is_prime(i + 1)) continue;
        int divisor = 2;
        bool valid = true;
        while(i / divisor >= divisor){
            if(i % divisor == 0){
                if(divisor % 2 == 0 && (i/divisor) % 2 == 0){
                    valid = false;
                    break;
                }else{
                    if(!is_prime(divisor + i/divisor)){
                        valid = false;
                        break;
                    }
                }
            }
            divisor++;
        }

        if(valid)
            ans += i;
    }

    cout << ans << endl;
}
