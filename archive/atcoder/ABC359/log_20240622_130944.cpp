#include <bits/stdc++.h>
using namespace std;

int main() {

  long Sx, Sy, Tx, Ty;
  cin >> Sx >> Sy >> Tx >> Ty;
  long Yx = 0;
  if(Sy % 2 == 0){
    if(Sx % 2 == 0){
      if(Sx < Tx)Yx += 1;
    }else{
      if(Sx > Tx)Yx += 1;
    }
  }else{
    if(Sx % 2 == 0){
      if(Sx > Tx)Yx += 1;
    }else{
      if(Sx < Tx)Yx += 1;
    }
  }
  //cout << Yx << endl;
  if(Ty % 2 == 0){
    if(Tx % 2 == 0){
      if(Sx > Tx)Yx += 1;
    }else{
      if(Sx < Tx)Yx += 1;
    }
  }else{
    if(Tx % 2 == 0){
      if(Sx < Tx)Yx += 1;
    }else{
      if(Sx > Tx)Yx += 1;
    }
  }
  //cout << Yx << endl;
  long y = abs(Ty - Sy);
  long x = abs(Tx - Sx);
  Yx += y;
  if(x <= Yx){
    cout << y << endl;
  }else{
    if(Ty % 2 == 0){}
    x -= Yx;
    cout << y+((x+1)/2) << endl;
  }
  return 0;
}