// Solution by Alexandros Pouroullis
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    string num_string;
    getline(cin, num_string);

    // Using the stringstream to parse the string of numbers.
    stringstream ss;
    ss << num_string;
    vector<int> nums;
    while(true){
        int val;
        ss >> val;
        if(!ss)
            break;
        nums.push_back(val);
    }

    int n;
    cin >> n;
    int m = nums.size();
    long long int polynacci[n] = {0};

    for(int i = 0; i < m; i++){
        polynacci[i] = nums[i];
    }

    for(int i = m; i < n; i++){
        int before = 1;
        while(before <= m){
            polynacci[i] += polynacci[i-before];
            before++;
        }
    }
    cout << polynacci[n-1];
}
