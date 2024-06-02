#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int A;

  int Ci[N] = {};
  int Cj[N]= {};
  int Cxi = 0;
  int Cxj = 0;
  bool flag = false;
  for(int i=1; i<=T; i++){
    cin >> A;
    int Mi = (A-1)/N;
    int Mj = (A-1)%N;

    Ci[Mi]++;
    Cj[Mj]++;
    if(Mi == Mj)Cxi++;
    if(Mi == (N-Mj-1))Cxj++;

    if(Ci[Mi] >= N)flag = true;
    if(Cj[Mj] >= N)flag = true;
    if(Cxi >= N)flag = true;
    if(Cxj >= N)flag = true;
    if(flag){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}