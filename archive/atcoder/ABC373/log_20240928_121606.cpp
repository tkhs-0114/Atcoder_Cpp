#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N;
  cin >> N;
  int Amax = -1* INF;
  for(int i=0; i<N; i++){
    int A;cin >> A;
    if(A > Amax)Amax=A;
  }
  int Bmax = -1*INF;
  for(int i=0; i<N; i++){
    int A;cin >> A;
    if(A > Bmax)Bmax=A;
  }
  long long OUT;
  OUT = Amax+Bmax;
  COUT(OUT);

  return 0;
}