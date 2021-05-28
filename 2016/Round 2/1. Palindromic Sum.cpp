// Solution by Alexandros Pouroullis
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

bool is_palindrome(long long num){
    string num_string = to_string(num);
    if(num_string.length() == 1)
        return true;

    string first_half, second_half;
    int  mid = num_string.length()/2;
    // string.substr(start, end) is lower bound inclusive, upper bound exclusive.
    // In the case of 4884, mid will be 2. Because strings are indexed from 0 to
    // the length of the string - 1 (3), the first half can be obtained by copying the
    // substring from 0 to the mid (2), yielding the characters at indexes 0 and 1.
    // This also works for numbers with an odd length.
    first_half = num_string.substr(0, mid);

    // If the length of the number is odd, then we skip the middle character
    // for the second half.
    if(num_string.length() % 2 == 1){
        // Putting only the starting position in the substr method yields all the characters
        // after and including the starting position.
        second_half = num_string.substr(mid+1);
    }else{
        // Otherwise, start from the middle character and copy the rest of the string.
        second_half = num_string.substr(mid);
    }

    reverse(second_half.begin(), second_half.end());

    if(first_half == second_half)
        return true;
   return false;
}

int main(){
    int n;
    cin >> n;
    // Largest integer. Can store up to 18 446 744 073 709 551 615.
    unsigned long long sum = n;

    int steps = 0;
    while(!is_palindrome(sum)){
        string num_string = to_string(sum);
        reverse(num_string.begin(), num_string.end());
        // stoull stands for "string to unsigned long long"
        // This is necessary, because the sum can get larger than
        // what an int is capable of storing, particularly in the case
        // of 89.
        sum += stoull(num_string);
        steps++;
    }

    cout << steps << endl;
}


