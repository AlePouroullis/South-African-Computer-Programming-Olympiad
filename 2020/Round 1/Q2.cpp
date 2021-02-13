// 2020 Round 1
// Question 2
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long total_grains_on_black_tiles = 0;
    long long grains_on_current_tile;

    for(int i = 1; i <= n; i++){
        if(i == 1)
            grains_on_current_tile = 1;
        else
            grains_on_current_tile = grains_on_current_tile * 2;

        if(i % 2 == 1)
            total_grains_on_black_tiles += grains_on_current_tile;
    }

    cout << total_grains_on_black_tiles;
}
