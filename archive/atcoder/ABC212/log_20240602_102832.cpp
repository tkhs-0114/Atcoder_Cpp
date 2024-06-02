#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;
  int A[N],B[M];
  for(int i=0; i<N; i++)cin >> A[i];
  for(int i=0; i<M; i++)cin >> B[i];

  sort(A, A+N);
  sort(B, B+M);


  // for(int i=0; i<N; i++)cout << A[i] << " ";
  // cout << endl;
  // for(int i=0; i<M; i++)cout <<  B[i] << " ";
  // cout << endl;
  int min = abs(A[0] - B[0]);

  int Ac=0, Bc=0;
  while(1){
    // cout <<A[Ac] << ":" << B[Bc] << " " <<abs(A[Ac] - B[Bc]) << endl;
    if(min > abs(A[Ac]-B[Bc]))min = abs(A[Ac] - B[Bc]);
    if(Ac >= N-1 && Bc >= M-1)break;
    else if(Bc >= M-1){
      Ac++;continue;
    }
    else if(Ac >= N-1){
      Bc++;continue;
    }
      if(A[Ac] == B[Bc])break;
      else if(A[Ac] < B[Bc])Ac++;
      else Bc++;
  }
  cout << min << endl;


  return 0;
}