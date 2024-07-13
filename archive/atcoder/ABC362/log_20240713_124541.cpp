#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  int L[N], R[N];
  long cnt=0, cntp=0;
  for(int i=0; i<N; i++){
    cin >> L[i] >> R[i];
    cnt += L[i];
    cntp += R[i]-L[i];
  }
  if(cnt <= 0 && 0 <= cnt+cntp){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
    return 0;
  }

  for(int i=0; i<N; i++){
    if(cnt+(R[i]-L[i]) < 0){
      cout << R[i] << " ";
      cnt+=(R[i]-L[i]);
    }else if(cnt < 0){
      cout << L[i]+abs(cnt) << " ";
      cnt=0;
    }else{
      cout << L[i] << " ";
    }
  }
  cout << endl;

  return 0;
}