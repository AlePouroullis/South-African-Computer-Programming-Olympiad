// Solution by Alexandros Pouroullis
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    int n;
    cin >> n;
    vector<double> fracs;
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i > j)
                continue;
            fracs.push_back((double)i/j);
        }
    }

    // Sorts in ascending order to make comparison of numbers in the next loop feasible.
    sort(fracs.begin(), fracs.end());
    vector<double> ans;
    for(int i = 0; i < fracs.size(); i++){
        // Floating point numbers can sometimes differ in the 7th decimal place and onwards, even when the numbers 
        // are expected to be equal. For this reason, we want to ensure that we only add unique rational numbers to
        // our vector of answers. To achieve this, you check that the difference between the number most recently added to 
        // the ans vector and the next number in the vector of fractions is larger than 10^-6 (6th decimal place).
        if(ans.size() == 0 || abs(ans.back() - fracs[i]) > 1e-6)
            ans.push_back(fracs[i]);
    }
    cout << ans.size();
}
