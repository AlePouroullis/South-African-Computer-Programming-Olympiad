// Solution by Alexandros Pouroullis
#include <iostream>
#include <string>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int main(){
    string message;
    getline(cin, message);

    // Let's say the message's length is 23. 23%5 = 3, but
    // we want to append 2 characters to get to the next multiple of 5,
    // so we subtract 23%5 (3) from 5, yielding 2, the desired result.
    message.append(5 - (message.length()%5), ' ');

    int rows = message.length()/5;

    // Storing the each character in the message in a 2-dimensional fashion.
    char code[rows][5];
    int pos = 0;
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < 5; col++){
            if(message[pos] == ' ')
                code[row][col] = '.';
            else code[row][col] = message[pos];
            pos++;
        }
    }

    // Outputting each character in the 2-dimensional char array, iterating over
    // columns first and rows secondly.
    for(int col = 0; col < 5; col++){
        for(int row = 0; row < rows; row++){
            cout  << code[row][col];
        }
    }
}
