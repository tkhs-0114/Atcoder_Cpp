#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;

  cin >> N >> M;

   int A[M];
  for(int i=0; i<M; i++){
    cin >> A[i];
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      int X;
      cin >> X;
      A[j] -= X;
    }
  }
  for(int i=0; i<M; i++){
    if(A[i] > 0){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

    // sort(A ,A+N);
    return 0;
}