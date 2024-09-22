#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  string AB, AC, BC;
  cin >> AB >> AC >> BC;
  int A=0, B=0, C=0;
  if(AB == "<")B++;
  else A++;
  if(AC == "<")C++;
  else A++;
  if(BC == "<")C++;
  else B++;

  if(A == 1)COUT("A");
  if(B == 1)COUT("B");
  if(C == 1)COUT("C");

  return 0;
}