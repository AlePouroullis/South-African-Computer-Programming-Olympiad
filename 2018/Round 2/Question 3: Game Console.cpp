// Solution by Alexandros Pouroullis
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

map<char, pair<int, int>> console;

int main(){
    console['A'] = {0, 0};
    console['B'] = {0, 1};
    console['C'] = {0, 2};
    console['D'] = {0, 3};
    console['E'] = {0, 4};
    console['F'] = {0, 5};
    console['G'] = {1, 0};
    console['H'] = {1, 1};
    console['I'] = {1, 2};
    console['J'] = {1, 3};
    console['K'] = {1, 4};
    console['L'] = {1, 5};
    console['M'] = {2, 0};
    console['N'] = {2, 1};
    console['O'] = {2, 2};
    console['P'] = {2, 3};
    console['Q'] = {2, 4};
    console['R'] = {2, 5};
    console['S'] = {3, 0};
    console['T'] = {3, 1};
    console['U'] = {3, 2};
    console['V'] = {3, 3};
    console['W'] = {3, 4};
    console['X'] = {3, 5};
    console['Y'] = {4, 0};
    console['Z'] = {4, 1};
    console[' '] = {4, 2};
    console['-'] = {4, 3};
    console['.'] = {4, 4};
    // tilde (~) used as a placeholder for accept.
    console['~'] = {4, 5};
    string phrase;
    getline(cin, phrase);
    int key_presses = 0;
    pair<int, int> previous_pos = console['A'];
    for(char c : phrase){
        key_presses += abs(previous_pos.first - console[c].first)
                    + abs(previous_pos.second - console[c].second);
        previous_pos = {console[c].first, console[c].second};
        // Add one key press because 'enter' has to be pressed.
        key_presses++;
    }
    key_presses += abs(previous_pos.first - console['~'].first)
                + abs(previous_pos.second - console['~'].second);
    // Have to press 'enter' after moving to the accept key.
    key_presses++;
    cout << key_presses << endl;
}
