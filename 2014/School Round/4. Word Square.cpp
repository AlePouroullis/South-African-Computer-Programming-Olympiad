#include <bits/stdc++.h>

using namespace std;

string word;

char word_square[8][8] = {{'T', 'H', 'E', 'Q', 'T', 'T', 'E', 'P'},
{'L', 'R', 'E', 'K', 'A', 'W', 'R', 'E'},
{'T', 'S', 'E', 'T', 'N', 'O', 'C', 'I'},
{'X', 'Y', 'C', 'O', 'L', 'T', 'Z', 'J'},
{'R', 'C', 'H', 'I', 'L', 'E', 'S', 'Q'},
{'U', 'M', 'N', 'X', 'B', 'E', 'S', 'T'},
{'Y', 'X', 'K', 'O', 'O', 'C', 'Q', 'F'},
{'G', 'H', 'I', 'K', 'C', 'O', 'R', 'B'}};

bool forwards(int row, int col){
    int j = 1;
    while(j < word.length() && col + j < 8){
        if(word[j] != word_square[row][col + j])
            return false;
        j++;
    }
    return true;
}

bool backwards(int row, int col){
    int j = 1;
    while(j < word.length() && col - j >= 0){
        if(word[j] != word_square[row][col - j])
            return false;
        j++;
    }
    return true;
}

int main(){
    cin >> word;

    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            if(word_square[i][j] == word[0]){

                if(forwards(r, c)){
                    cout << word << ", row " << i+1 << ", column " << j+1 << ", " << "forwards" << endl;
                    return 0;
                }
                else if(backwards(r, c)){
                    cout << word << ", row " << i+1 << ", column " << j+1 << ", " << "backwards" << endl;
                    return 0;
                }
            }
    cout << "NOT FOUND" << endl;
}
