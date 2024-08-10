#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  long M;
  cin >> N >> M;
  int A[N];
  for(auto& a:A)cin >> a;
  sort(A, A+N);
  long B[N];
  B[0] = A[0];
  for(int i=1;i<N; i++){
    B[i] = B[i-1]+A[i];
  }

  for(auto a:A)cout << a << " ";
  cout << endl;
  for(auto a:B)cout << a << " ";
  cout << endl;

  if(M < A[0]*N){
    for(int i=0; i<=A[0]; i++){
      if(N*i > M){
        cout << i-1 << endl;
        return 0;
      }
    }
  }
  for(int i=0; i<N; i++){
    int R = B[i] + A[i]*(N-i-1);
    cout << R <<" "<<N-i-1 << " " << (M-B[i])/(N-i-1) <<endl;
    if(R > M){
      int I = i-1;
      int M2 = M - B[I];
      if(N-I-1 != 0)cout << M2/(N-I-1)<< endl;
      //return 0;
    }
  }
  cout << "infinite" << endl;

  return 0;
}