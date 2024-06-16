#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >>N;
  int A[N], B[N];
  for(int i=0; i<N; i++){
    cin >>A[i];
    B[i] = A[i];
  }
  sort(A, A+N);
  for(int i=0; i<N; i++){
    if(B[i] == A[N-2]){
      cout << i+1 << endl;
      return 0;
    }
  }


  return 0;
}