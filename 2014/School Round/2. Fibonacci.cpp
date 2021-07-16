#include <bits/stdc++.h> 

using namespace std;

int main(){
    int f, s, l;
    cin >> f >> s >> l;
    int fib[l];
    fib[0] = f;
    fib[1] = s;
    for(int i = 2; i < l; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < l; i++){
        if(i != l - 1)
            cout << fib[i] << ", ";
        else
            cout << fib[i] << endl;
    }
}
