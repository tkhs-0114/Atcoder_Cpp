#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  MAKE(A);MAKE(B);MAKE(C);
  if(B < C){
    if(A < B || C < A){
      COUT("Yes");
    }else{
      COUT("No");
    }
  }else{
    if(B < A && A < C){
      COUT("Yes");
    }else{
      COUT("No");
    }
  }

  return 0;
}