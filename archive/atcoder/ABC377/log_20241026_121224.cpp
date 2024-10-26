#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  int S[9][9];
  for(int i=1; i<9; i++){
    string A;
    cin >> A;
    for(int j=1; j<9; j++){
      if(A.at(j-1) == '#'){
        S[i][j] = 1;
      }else{
        S[i][j] = 0;
      }
    }
  }
  for(int i=1; i<9; i++){
    for(int j=1; j<9; j++){
      if(S[i][j] == 1){
        for(int k=1; k <9; k++){
          if(S[i][k] != 1)S[i][k] = 2;
          if(S[k][j] != 1)S[k][j] = 2;
        }
      }
    }
  }
  int cnt = 0;
  for(int i=1; i<9; i++){
    for(int j=1; j<9; j++){
      if(S[i][j] == 0)cnt++;
    }
  }
  COUT(cnt);

  return 0;
}