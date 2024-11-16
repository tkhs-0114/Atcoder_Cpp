#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  int A;
  cin >> A;
  int a = A/100%10;
  int b = A/10%10;
  int c = A/1%10;
  cout << b << c << a << endl;
  cout << c << a << b << endl;

  return 0;
}