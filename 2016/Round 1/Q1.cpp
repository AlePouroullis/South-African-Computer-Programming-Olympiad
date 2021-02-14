// 2016 Round 1
// Question 1

#include <iostream>

using namespace std;

int main(){
    double time, distance;
    cin >> time >> distance;

    time /= (60*60); // converts seconds to hours
    distance /= 1000; // converts metres to kilometres

    int speed;
    speed = distance/time;

    cout << speed;
}
