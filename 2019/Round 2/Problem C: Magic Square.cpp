#include <iostream>
#include <map>
#include <set>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int square[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> square[i][j];
    }

    // Counting occurrences of sums to determine the highest occurring sum which
    // will be compared against later on.
    map<int, int> occurrences;
    for(int row = 0; row < n; row++){
        int temp_sum = 0;
        for(int col = 0; col < n; col++){
            temp_sum += square[row][col];
        }
        if(occurrences.count(temp_sum))
            occurrences[temp_sum]++;
        else
            occurrences[temp_sum] = 1;
    }
    for(int col = 0; col < n; col++){
        int temp_sum = 0;
        for(int row = 0; row < n; row++){
            temp_sum += square[row][col];
        }
        if(occurrences.count(temp_sum))
            occurrences[temp_sum]++;
        else
            occurrences[temp_sum] = 1;
    }

    int main_sum, highest_occurrence = 0;
    for(map<int, int>::iterator itr = occurrences.begin(); itr != occurrences.end(); itr++){
        if(itr->second > highest_occurrence){
            highest_occurrence = itr->second;
            main_sum = itr->first;
        }
    }

    set<int> sums;
    for(int row = 0; row < n; row++){
        int temp_sum = 0;
        for(int col = 0; col < n; col++){
            temp_sum += square[row][col];
        }
        sums.insert(temp_sum);
    }
    for(int col = 0; col < n; col++){
        int temp_sum = 0;
        for(int row = 0; row < n; row++){
            temp_sum += square[row][col];
        }
        sums.insert(temp_sum);
    }

    if(sums.size() > 2){
        cout << "NOT MAGIC" << endl;
        return 0;
    }else if(sums.size() == 1){
        cout << "MAGIC" << endl;
        return 0;
    }else{
        int r, c, v;
        for(int row = 0; row < n; row++){
            int temp_sum = 0;
            for(int col = 0; col < n; col++){
                temp_sum += square[row][col];
            }
            if(temp_sum != main_sum){
                r = row + 1;
                v = abs(temp_sum - main_sum);
                break;
            }
        }
        for(int col = 0; col < n; col++){
            int temp_sum = 0;
            for(int row = 0; row < n; row++){
                temp_sum += square[row][col];
            }
            if(temp_sum != main_sum){
                c = col + 1;
                break;
            }
        }
        cout << "ALMOST MAGIC" << endl;
        cout << r << " " << c << " " << v << endl;
        return 0;
    }
}
