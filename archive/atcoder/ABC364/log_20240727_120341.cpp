#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  string A[N];
  for(int i=0; i<N; i++){
    cin >> A[i];
    if(A[i] == "sweet" && i != 0 && i != N-1){
      if(A[i-1] == "sweet"){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;

  return 0;
}