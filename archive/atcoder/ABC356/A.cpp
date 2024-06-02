#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, L, R;
  cin >> N >> L >> R;

  int A[N];
  for(int i=1; i<=N; i++){
    A[i-1] = i;
  }
  int B[R-L+1];
  for(int i=0; i<R-L+1; i++){
    B[i] = A[L+i-1];
  }
  for(int i=R-L; i>=0; i--){
    A[R-1-i] = B[i];
  }

  for(int i=0; i<N; i++){
    cout << A[i] << " ";
  }
  cout << endl;
    // sort(A ,A+N);
    return 0;
}