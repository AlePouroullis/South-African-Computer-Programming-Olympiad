// 2017 Round 1
// Question 3

#include <iostream>
#include <string>

using namespace std;


bool isalpha(const char &c){
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

int main(){
    string text;
    int total_letters = 0, total_words, spaces = 0;
    double average;
    getline(cin, text);
    for(int i = 0; i < text.length(); i++){

        if(isalpha(text[i]))
            total_letters++;

        else if(text[i] == ' ')
            spaces++;
    }

    total_words = spaces + 1;
    average = (double)total_letters / total_words;

    cout << fixed << setprecision(2) << average;
}
