#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;
  int imax = S.size();
  int cnt1=0, cnt2=0;
  for(int i=0; i<imax; i++){
    if(isupper(S.at(i))){
      cnt1++;
    }else{
      cnt2++;
    }
  }
  if(cnt1 > cnt2){
    for(int i=0; i<imax; i++){
      if(isupper(S.at(i))){
      }else{
        transform(S.begin(), S.end(), S.begin(), ::toupper);
      }
      cout << S.at(i);
    }
  }else{
    for(int i=0; i<imax; i++){
      if(isupper(S.at(i))){
        transform(S.begin(), S.end(), S.begin(), ::tolower);
      }else{
        
      }
      cout << S.at(i);
    }
  }
  cout << endl;
  return 0;
}