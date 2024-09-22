#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  MAKE(N);
  int X[N];
  int P[N];
  for(int i=0; i<N; i++){
    cin >> X[i];
  }
  cin >> P[0];
  for(int i=1; i<N; i++){
    MAKE(p);
    P[i] = p + P[i-1];
  }
  MAKE(Q);
  REP(z, Q){
    MAKE(L);MAKE(R);
    int target = L;
    int Left = X[0], Right = X[N-1];//探索範囲
    int Now;
    while(Left <= Right){
      Now = (Left+Right)/2;
      int Calc = X[Now];
      if(target < Calc)Right = Now-1;
      if(target > Calc)Left = Now+1;
      if(target == Calc)break;
    }//Nowはtargetの
    cout << Now << endl;
    target = R;
    Left = X[0], Right = X[N-1];//探索範囲
    int NowR;
    while(Left <= Right){
      NowR = (Left+Right)/2;
      int Calc = X[NowR];
      if(target < Calc)Right = NowR-1;
      if(target > Calc)Left = NowR+1;
      if(target == Calc)break;
    }//Nowはtargetの
    cout << NowR << endl;
  }

  return 0;
}