#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  int A[] = {0,2,4,6,8,10,12,14,16,18};

  int target = 16;
  int Left = 0, Right = 10;//探索範囲
  int Now;
  while(Left <= Right){
    Now = (Left+Right)/2;
    Calc = A[Now]
    if(target < Calc)Right = Now-1;
    if(target > Calc)Left = Now+1;
    if(target == Calc)break;
  }//Nowはtargetの
  cout << Now << endl;

  return 0;
}