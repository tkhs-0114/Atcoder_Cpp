#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N, Q;
  cin >> N >> Q;
  char S[N+1];
  for(int i=1; i<=N; i++)cin >> S[i];
  bool B[N+1] = {};
  int cnt = 0;
  for(int i=1; i<=N-2; i++){
    if(S[i] == 'A' && S[i+1]=='B' && S[i+2]=='C'){
      B[i]=true;
      B[i+1]=true;
      B[i+2]=true;
      cnt++;
    }
  }
  for(int i=0; i<Q; i++){
    int X;
    char C;
    cin >> X >> C;
    if(S[X] != C){
      if(B[X] == true){
        if(S[X] == 'A'){
          B[X]=false;
          B[X+1]=false;
          B[X+2]=false;
        }
        if(S[X] == 'B'){
          B[X-1]=false;
          B[X]=false;
          B[X+1]=false;
        }
        if(S[X] == 'C'){
          B[X-2]=false;
          B[X-1]=false;
          B[X]=false;
        }
        cnt--;
      }
      S[X] = C;
      if(S[X]=='A' && S[X+1]=='B' && S[X+2]=='C'){
        B[X]=true;
        B[X+1]=true;
        B[X+2]=true;
        cnt++;
      }
      if(S[X-1]=='A' && S[X]=='B' && S[X+1]=='C'){
        B[X-1]=true;
        B[X]=true;
        B[X+1]=true;
        cnt++;
      }
      if(S[X-2]=='A' && S[X-1]=='B' && S[X]=='C'){
        B[X-2]=true;
        B[X-1]=true;
        B[X]=true;
        cnt++;
      }
    }
    // for(auto b:B)cout << b << " ";
    // cout << endl;
    cout << cnt << endl;;
  }


  return 0;
}