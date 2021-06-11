// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

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
