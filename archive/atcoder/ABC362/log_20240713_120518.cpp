#include <bits/stdc++.h>
using namespace std;

int main() {

  int R,G,B;
  int P,Q;
  string C;
  cin >> R >> G >> B >>C;
  
  if(C == "Red"){
    P = G;
    Q = B;
  }else if(C == "Green"){
    P = R;
    Q = B;
  }else{
    P = R;
    Q = G;
  }
  if(P < Q){
    cout << P;
  }else{
    cout << Q;
  }
  cout << endl;
  return 0;
}