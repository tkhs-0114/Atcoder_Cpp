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
  if(S[S.length()-1] == 'n' && S[S.length()-2] == 'a' && S[S.length()-3] == 's'){
    COUT("Yes");
  }else{
    COUT("No");
  }

  return 0;
}