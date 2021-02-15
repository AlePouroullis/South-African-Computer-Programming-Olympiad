// 2018 Round 1
// Question 1

#include <iostream>

using namespace std;

int main()
{
    int daytime, evening, weekend;
    cin >> daytime >> evening >> weekend;
    int total_cost = 0;
    total_cost += (daytime > 100 ? (daytime - 100)*80 : 0);
    total_cost += evening * 70;
    total_cost += weekend * 50;
    cout << total_cost << "c" << endl;
}
