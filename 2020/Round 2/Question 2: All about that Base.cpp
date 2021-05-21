#include <iostream>
#include <string>

using namespace std;

int to_integer(char character){
    if(isalpha(character)){
        return (int)character - (int)'A' + 10;
    }else
        return (int)character - (int)'0';
}

string base_b_sum(string a, string b, int base){
    string base_b = "";
    int carry = 0;
    for(int i = a.length()-1; i >= 0; i--){
        int ia = to_integer(a[i]);
        int ib = to_integer(b[i]);
        int sum = ia + ib + carry;
        if(sum >= base){
            carry = 1;
            sum -= base;
        }else
            carry = 0;
        if(sum >= 10){
            base_b.insert(0, 1, (char)(sum - 10 + (int)'A'));
        }else
            base_b.insert(0, 1, (char)(sum + (int)'0'));
    }
    if(carry == 1){
        base_b.insert(0, 1, '1');
    }

    return base_b;
}

int main(){
    int b;
    string x, y;
    cin >> b >> x >> y;
    if(x.length() > y.length()){
        y.insert(0, x.length() - y.length(), '0');
    }else if(y.length() > x.length()){
        x.insert(0, y.length() - x.length(), '0');
    }

   cout << base_b_sum(x, y, b);
}
