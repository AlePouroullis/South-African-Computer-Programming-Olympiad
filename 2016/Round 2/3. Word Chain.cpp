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

const int mx = 1000;
vector<string> words;
vector<vector<string>> ans;
vector<string> temp;
bool visited[mx];

bool valid(string a, string b){
    int cnt = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]) cnt++;
        if(cnt > 1) return false;
    }
    return true;
}

bool is_word_chain(vector<string> temp){
    for(int i = 1; i < temp.size(); i++){
        if(!valid(temp[i-1], temp[i]))
            return false;
    }
    return true;
}

void dfs(){
    if(temp.size() == words.size()){
        if(is_word_chain(temp))
            ans.push_back(temp);
        return;
    }
    for(int i = 0; i < words.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            temp.push_back(words[i]);
            dfs();
            temp.pop_back();
            visited[i] = false;
        }
    }
}

int main(){
    string input_string;
    getline(cin, input_string);
    stringstream ss;
    ss << input_string;
    string word;
    while(ss >> word){
        words.push_back(word);
        if(!ss)
            break;
    }

    dfs();

    if(ans.size() == 0)
        cout << "Impossible" << endl;
    else{
        sort(ans.begin(), ans.end());

        for(int i = 0; i < ans[0].size(); i++){
            if(i == ans[0].size() - 1)
                cout << ans[0][i] << endl;
            else cout << ans[0][i] << " ";
        }

    }
}
