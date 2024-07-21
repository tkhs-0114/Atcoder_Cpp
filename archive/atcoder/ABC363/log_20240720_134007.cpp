#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
  if(r*2 > n)r=n-r;
  int result = n;
  for(int i=2; i<=r; i++){
    result *= (n-i+1);
    result /= i;
  }
  return result;
}

int main() {

  int N,K;
  cin >> N >> K;
  string S;cin >> S;
  char SS[N];
  int SI[N];
  for(int i=0; i<N; i++){
    SS[i] = S.at(i);
  }
  for(int i=0; i<N; i++){
    SI[i]=i;
  }
  int next[K];
  int CI[N][K];
  int CC_cnt=0;
  do{
    bool ch = false;
    for(int i=0;i<K;i++)if(next[i] != SI[i])ch = true;
    if(!ch)continue;
    char CS[K];
    for(int i=0;i<K;i++)CS[i] = SS[SI[i]];
    if(K%2 == 0);
    ch = true;
    for(int i=0; i<K/2; i++){
      if(CS[i] != CS[K-i-1])ch = false;
    }
    if(!ch)continue;
    // for(auto cs:CS)cout << cs;
    // cout << endl; 

    for(int i=0;i<K;i++){
      next[i]=SI[i];
      CI[CC_cnt][i] = SI[i];
    }
    //cout << CC_cnt << endl;
    for(int i=0; i<K; i++){
      cout << CI[CC_cnt][i];
    }
    cout << endl;
    CC_cnt++;

    // for(auto n:next)cout << n;
    // cout << endl;
  }while(next_permutation(SI, SI+N));
  int cnt=0;
  do{
    for(int i=0; i<N; i++)cout << SI[i];
    cout << endl;
    for(int i=0; i<CC_cnt; i++){
      bool ch = true;
      for(int j=0; j<=N-K; j++){
        for(int k=0; k<K; k++){
          if(SI[j+k] != CI[i][k]){
            ch = false;
            break;
          }else cout << "OK" << endl;
        }
        if(ch)cnt++;
        if(!ch)break;
      }
    }
  }while(next_permutation(SI, SI+N));
  cout << cnt << endl;
  return 0;
}