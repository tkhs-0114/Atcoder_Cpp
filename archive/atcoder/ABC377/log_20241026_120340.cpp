#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  bool A,B,C;
  A = true; B = true; C = true;
  string S;
  cin >> S;
  for(int i=0; i<3; i++){
    switch(S.at(i)){
      case 'A':
        A = false;
        break;
      case 'B':
        B = false;
        break;
      case 'C':
        C = false;
        break;
    }
  }
  if(!A && !B && !C){
    COUT("Yes");
  }else{
    COUT("No");
  }

  return 0;
}