// 2016 Round 1
// Question 3

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input_string;
    int N;
    cin >> input_string >> N;
    string urgh(input_string.length(), 'A');

    for(int i = 0; i < input_string.length(); i++){
        urgh[(i + N) % input_string.length()] = input_string[i];
    }
    for(int i = 0; i < urgh.length(); i++)
        urgh[i] = 'A' + ((urgh[i] - 'A' + N) % 26);

    cout << urgh;
}
