#include <bits/stdc++.h>
using namespace std;

int main() {

  int Y;
  cin >> Y;
  if(Y%400 == 0){
    cout << 366;
  }else if(Y%100 == 0){
    cout << 365;
  }else if(Y%4 == 0){
    cout << 366;
  }else{
    cout << 365;
  }
  cout << endl;

  return 0;
}