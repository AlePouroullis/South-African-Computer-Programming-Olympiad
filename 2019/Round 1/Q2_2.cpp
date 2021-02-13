// 2019 Round 1
// Question 2.2

#include <iostream>
#include <cmath>
#include <queue>

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
  int N;
  cin >> N;
  
  queue<int> Q;
  Q.push(2);
  Q.push(3);
  Q.push(5);
  Q.push(7);
  
  int counter = 0;
  
  while(!Q.empty() && ((++counter) != N)){
      int p = Q.front();
      Q.pop();
      for(int i = 1; i <= 9; i+=2){
          if(prime(10 * p + i))
              Q.push(10 * p + i);
      }
  }
   
  if(!Q.empty())
        cout << Q.front() << endl;
}
