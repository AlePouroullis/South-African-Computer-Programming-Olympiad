#include <bits/stdc++.h>

using namespace std;

bool ordered(int n){
    string num = to_string(n);
    int last = int(num[0] - '0');
    for(int i = 1; i < num.length(); i++){
        if(!(int(num[i] - '0') >= last))
            return false;
    }
    return true;
}

int main(){
    int v;
    cin >> v;
    int i = 1;
    vector<int> ans;
    while(i*i <= v){
        if(ordered(i*i))
            ans.push_back(i*i);
        i++;
    }

    for(int i = 0; i < ans.size(); i++){
        if(i != ans.size() - 1)
            cout << ans[i] << ", ";
        else
            cout << ans[i] << endl;
    }
}
