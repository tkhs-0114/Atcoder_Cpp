#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int cnt =0;
  for(auto s:S){
    if(s == '?')cnt++;
  }
  for(int i=0; i<N-K; i++){
    string s = S.substr(i, K);
    cout << s << endl;
    for(int i=0; i<K/2; i++){
      if(s.at(i) != s.at(K-i-1) && s.at(i) != '?' && s.at(K-i-1) != '?'){
        cout << "No" << endl;
        break;
      }
    }
  }

  return 0;
}