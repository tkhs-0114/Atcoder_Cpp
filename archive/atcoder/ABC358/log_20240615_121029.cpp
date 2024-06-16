#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A;
  cin >> N >> A;
  int T[N];
  for(auto& t:T){
    cin >> t;
  }
  int i=0;
  for(auto t:T){
    while(i < t){
      i++;
    }
    i+= A;
    cout << i << endl;
  }
  return 0;
}