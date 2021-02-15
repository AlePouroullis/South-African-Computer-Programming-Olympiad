// 2018 Round 1
// Question 2

#include <iostream>
#include <string>

using namespace std;

bool isvowel(const char &letter){
    return (letter == 'a' || letter == 'e' 
        || letter == 'i'  || letter == 'o' 
        || letter == 'u');
}

int main(){
    string input_string;
    getline(cin, input_string);

    for(int i = 0; i < input_string.length(); i++){
        if(!isvowel(input_string[i]) && input_string[i] != ' '){
            cout << input_string[i] << 'o' << input_string[i];
           }
        else
            cout << input_string[i];
    }
}
