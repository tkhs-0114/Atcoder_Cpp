#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  int A[N];
  for(auto& a:A){
    cin >> a;
  }
  int B[N];
  for(int i=0; i<N;i++){
    B[i] = A[i];
  }
  sort(B, B+N);
  int max2 = B[N-2];
  for(int i=0; i<N; i++){
    if(A[i] == max2){
cout << i+1 << endl;
    }
  }


  return 0;
}