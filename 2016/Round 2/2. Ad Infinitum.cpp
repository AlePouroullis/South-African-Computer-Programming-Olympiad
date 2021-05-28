// Solution by Alexandros Pouroullis
#include <iostream>
#include <string>
#include <set>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

bool is_terminating(int denominator){
    while(denominator % 2 == 0)
        denominator /= 2;
    while(denominator % 5 == 0)
        denominator /= 5;
    return (denominator == 1);
}

int main(){
    string input;
    cin >> input;

    int pos_dash = input.find('/');
    string num1, num2;
    num1 = input.substr(0, pos_dash);
    num2 = input.substr(pos_dash+1);
    int numerator = stoi(num1), denominator = stoi(num2);

    if(is_terminating(denominator)){
        cout << (double)numerator/denominator;
    }else{
        set<int> remainders;
        string output_string = "";
        cout << numerator/denominator << ".(";
        // Long division:
        while(!remainders.count(numerator%denominator)){
            int remainder = numerator % denominator;
            remainders.insert(numerator%denominator);
            numerator = remainder*10;
            cout << numerator/denominator;
        }
        cout << ')';
    }
}
