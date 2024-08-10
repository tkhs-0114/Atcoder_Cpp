#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;
  int Si, Sj;
  cin >> Si >> Sj;
  Si --; Sj --;
  int C[H][W];
  for(int i=0; i<H; i++){
    string c;
    cin >> c;
    for(int j=0; j<W; j++){
      C[i][j] = c.at(j);
    }
  }
  string x;
  cin >> x;
  for(int i=0; i<(int)(x.length()); i++){
    if(x.at(i) == 'L'){
      if(!(C[Si][Sj-1] == '#' || Sj == 0)){
        Sj -= 1;
      }
    }
    if(x.at(i) == 'R'){
      if(!(C[Si][Sj+1] == '#' || Sj == W-1)){
        Sj += 1;
      }
    }
    if(x.at(i) == 'U'){
      if(!(C[Si-1][Sj] == '#' || Si == 0)){
        Si -= 1;
      }
    }
    if(x.at(i) == 'D'){
      if(!(C[Si+1][Sj] == '#' || Si == H-1)){
        Si += 1;
      }
    }
    // cout << Si << " " << Sj << endl;
  }
  cout << ++Si << " " << ++Sj << endl;

  return 0;
}