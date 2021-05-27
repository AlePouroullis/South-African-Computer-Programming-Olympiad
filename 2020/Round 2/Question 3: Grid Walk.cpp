// Solution by Alexandros Pouroullis
#include <iostream>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
    int dp[n][m];
    memset(dp, 0, sizeof(dp[0][0]) * n * m);
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] != '#'){
                if(i > 0)
                    dp[i][j] += dp[i-1][j];
                if(j > 0)
                    dp[i][j] += dp[i][j-1];
            }
        }
    }

    cout << dp[n-1][m-1] << endl;
}
