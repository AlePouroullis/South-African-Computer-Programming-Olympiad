// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    bool visited[26];
    vector<char> c;
    int cnt[26] = {0};
    for(int i = 0; i < s.length(); i++){
        if(!visited[s[i]-'a']){
            visited[s[i]-'a'] = true;
            c.push_back(s[i]);
        }
        cnt[s[i]-'a']++;
    }

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << cnt[c[i]-'a'];
    }
    cout << endl;
}
