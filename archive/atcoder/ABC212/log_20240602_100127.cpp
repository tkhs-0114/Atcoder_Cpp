#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, X1, X2, X3, X4;
  cin >> X;
  X1 = X/1000;
  X2 = (X/100)%10;
  X3 = (X/10)%10;
  X4 = (X/1)%10;
  if(X1 == X2 && X2 == X3 && X3 == X4){
    cout << "Weak" << endl;
    return 0;
  }
  int C = X1;
  if(X2 == (C+1)%10 && X3 ==(C+2)%10 && X4 ==(C+3)%10){
    cout << "Weak" << endl;
    return 0;
  }
  cout << "Strong" << endl;

  return 0;
}