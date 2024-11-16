#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int c1, c2, c3;
  c1 = 0;
  c2 = 0;
  c3 = 0;
  int N;
  cin >> N;
  int j = 1;
  for(int i=0; i<6; i++){
    int n = (N/j)%10;
    if(n == 1)c1++;
    if(n == 2)c2++;
    if(n ==3)c3++;
    j = j * 10;
  }
  if(c1 ==1 && c2 == 2&& c3 ==3){
    COUT("Yes");
  }else{
    COUT("No");
  }

  return 0;
}