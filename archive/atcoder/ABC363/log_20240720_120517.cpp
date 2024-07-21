#include <bits/stdc++.h>
using namespace std;

int main() {

  int R;
  cin >> R;
  if(R > 200){
    cout << R%200 << endl;
  }else{
    cout << 200%R << endl;
  }

  return 0;
}