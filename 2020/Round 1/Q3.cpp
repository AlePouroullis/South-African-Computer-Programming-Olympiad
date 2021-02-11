#include <iostream>
#include <string> // alternatively, <string>. iostream actually includes string, but
                  // including it explicitly is good practice.
#include <algorithm> // for sort()

using namespace std;

bool descending(const char &a, const char &b){
    return a > b;
}

int main(){
    string input_string;
    cin >> input_string;
    string output_string = "";
    for(int i = 0; i < input_string.length(); i++){
        if(input_string[i] != '+')
            output_string += input_string[i];
    }

    sort(output_string.begin(), output_string.end(), descending);

    for(int i = 0; i < output_string.length(); i++)
        cout << output_string[i] << ((i != output_string.length() - 1) ? '+' : '\n');
}
