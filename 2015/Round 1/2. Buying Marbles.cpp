#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int required = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > required)
            required = a[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += required - a[i];
    }

    cout << ans << endl;
}
