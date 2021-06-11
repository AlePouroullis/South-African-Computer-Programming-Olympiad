// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int max_num = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max_num)
            max_num = a[i];
        sum += a[i];
    }

    cout << max_num * n - sum << endl;
}
