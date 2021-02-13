// 2018 Round 1
// Question 2

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input_string;
    getline(cin, input_string);
    for(int i = 0; i < input_string.length(); i++){
        if(input_string[i] != 'a' && input_string[i] != 'e' && input_string[i] != 'i'
           && input_string[i] != 'o' && input_string[i] != 'u' && input_string[i] != ' '){
            cout << input_string[i] << 'o' << input_string[i];
           }
        else
            cout << input_string[i];

    }
}
