#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  string S;
  cin >> S;
  int N = (int)(S.length());

  string T(N, ' ');
  for(int i=0; i<N; i++){
    if('A' <= S.at(i) && S.at(i) <= 'Z'){
      T.at(i) = char(S.at(i)-'A'+'a');
    }else{
      T.at(i) = char(S.at(i)-'a'+'A');
    }
  }
  int Q;
  cin >> Q;

  for(int i=0; i<Q; i++){
    long long K;
    cin >> K;
    long long a,b;
    a = (K+N-1) / N;
    b = (K+N-1) % N;
    cout << a << " " << b;
    long long c = 1;
    while(c < a){
      c = c*2;
    }
    cout << " " << c;
    int cnt = 0;
    while(c > 2){
      a = (c/2) - (c - a);
      c = c / 2;
      cout << endl << a;
      cnt++;
    }
    if((a == 1 && cnt%2 == 0) || (a == 0 && cnt%2 == 1)){
      cout << S.at(b) << " ";
    }else {
      cout << T.at(b) << " ";
    }
  }
  cout << endl;

  return 0;
}