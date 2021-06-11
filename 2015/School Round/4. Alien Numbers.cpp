// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

int main(){
    // maximum representable factorial is 20!.
    long long factorial[21];
    factorial[0] = factorial[1] = 1;
    factorial[2] = 2;
    for(int i = 3; i < 21; i++){
        factorial[i] = factorial[i-1] * i;
    }

    long long n;
    cin >> n;

    bool start = false;
    vector<int> ans;
    for(int i = 20; i >= 1; i--){
        int cnt = 0;
        while(n - factorial[i] >= 0){
            cnt++;
            n -= factorial[i];
            start = true;
        }
        if(start == true)
            ans.push_back(cnt);
    }

    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        if(i == ans.size()-1)
            cout << ans[i] << endl;
        else
            cout << ans[i] << " ";
    }
}
