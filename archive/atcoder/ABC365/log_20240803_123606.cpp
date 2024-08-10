#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M;
  cin >> N >> M;
  int A[N];
  for(auto& a:A){
    cin >> a;
  }
  sort(A, A+N);
  int B[N];
  B[0] = A[0];
  for(int i=1; i<N; i++){
    B[i]= B[i-1]+A[i];
  }

  int pre = A[0];
  int ii = A[0];
  for(int i=1; i<N; i++){
    if(A[i] == pre)continue;
    int CC = B[i-1] + (A[i-1]*(N-i));
    //cout << CC << " " << B[i-1] << " " << A[i-1] << " " << N-i <<endl;
    if(CC < M){
      ii = A[i-1];
    }
    else{
      cout << ii << endl;
      return 0;
    }
  }
  cout << "infinite" << endl;
  //cout << endl;

  return 0;
}