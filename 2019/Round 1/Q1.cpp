// 2019 Round 1
// Question 1

#include <iostream>

using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  
  // Sum of interior angles of triangle = 180 degrees
  if(a + b + c != 180)
      cout << "IMPOSSIBLE";
   else if(a == b && b == c)
      cout << "EQUILATERAL";
   else if(a == b || a == c || b == c)
      cout << "ISOSCELES";
   else
      cout << "SCALENE";
}
