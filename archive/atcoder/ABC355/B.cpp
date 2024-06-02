#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int A[N];
  int B[M];
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  for(int i=0; i<M; i++){
    cin >> B[i];
  }

  //sort(A, A+N);
  //sort(B, B+M);
  int C[N+M];
  for(int i=0; i<N+M; i++){
    if(i < N){
      C[i] = A[i];
    }else{
      C[i] = B[i-N];
    }
  }
  sort(C, C+(N+M));

  int now = 0;
  int now2 = 0;

  for(int i=0; i<N+M; i++){
    //bool exists = find(A, A+(N+M), C[i]) != A+(N+M);
    if(find(A, A+(N), C[i]) != A+(N)){
      now = -1;
    }else{
      now = 1;
    }
    //cout << C[i] << ":" << now << endl;
    if(now2 == -1 && now == -1){
      cout << "Yes" << endl;
      return 0;
    }
    now2 = now;
  }
  cout << "No" << endl;
  return 0;
}