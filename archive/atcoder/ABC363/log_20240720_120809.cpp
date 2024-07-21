#include <bits/stdc++.h>
using namespace std;

int main() {

  int R;
  cin >> R;
  if(R < 100){
    cout << 100 - R;
  }else if(R < 200){
    cout << 200 - R;
  }else if(R < 300){
    cout << 300 - R;
  }
  cout << endl;

  return 0;
}