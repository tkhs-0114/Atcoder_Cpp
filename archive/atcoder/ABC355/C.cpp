#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int A[T];
  for(int i=0; i<T; i++){
    cin >> A[i];
  }
  int M[N][N] = {};
  bool flag = false;
  for(int Ai=0; Ai<T; Ai++){
    int Mi = (A[Ai]-1)/N;
    int Mj = (A[Ai]-1)%N;
    M[Mi][Mj] = 1;

    int Ci = 0, Cj=0, Cxi=0, Cxj=0;
    for(int C=0; C<N; C++){
      Ci += M[C][Mj];
      Cj += M[Mi][C];
      Cxi += M[C][C];
      Cxj += M[N-C-1][C];
    }
    if(Ci >= N)flag = true;
    if(Cj >= N)flag = true;
    if(Cxi >= N)flag = true;
    if(Cxj >= N)flag = true;

    /*for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        cout << M[i][j];
      }
      cout << endl;
    }
    cout << "-----" << endl;*/


    if(flag){
      cout << Ai+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}