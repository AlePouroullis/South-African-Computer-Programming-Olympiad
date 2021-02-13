// 2019 Round 1
// Question 3

#include <iostream>
#include <string>

using namespace std;

int main(){
  string digit_words[9] = {"ONE", "TWO", "THREE", "FOUR", "FIVE",
                          "SIX", "SEVEN", "EIGHT", "NINE"};
  string input_string;
  cin >> input_string;
  
  for(string &digit_word : digit_words){
      int characters_found = 0;
      int last_index = -1;
      for(char &c : digit_word){
          for(int i = last_index + 1; i < input_string.length(); i++){
              if(input_string[i] == c){
                  last_index = i;
                  characters_found++;
                  break;
              }
          }
      }
    
      if(characters_found == digit_word.length()){
          cout << digit_word;
          return 0;
      }
  }
  
  cout << "NONE";
}
