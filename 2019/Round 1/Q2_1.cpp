// 2019 Round 1
// Question 2.1

#include <iostream>
#include <cmath>

using namespace std;

bool prime(const int &num){
  if(num < 2) return false;
  if(num == 2 || num == 3) return true;
  if(!(num % 6 == 1 || num % 6 == 5)) return false;
  for(int i = 5; i <= sqrt(num); i++) 
      if(num % i == 0)
          return false;
  return true;
}

int main(){
  int n;
  cin >> n;
  
  int i = 2;
  int counter = 0;
  while(counter < n){
      if(prime(i))
        counter++;
      i++;
  }
  
  cout << i - 1;
}
